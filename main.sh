#!/bin/bash

set -eu

declare -ra targets=(
	'mips64el-unknown-linux-android21'
	'i686-unknown-linux-android14'
	'mipsel-unknown-linux-android14'
	'armv7-unknown-linux-androideabi14'
	'armv5-unknown-linux-androideabi14'
	'x86_64-unknown-linux-android21'
	'riscv64-unknown-linux-android35'
	'aarch64-unknown-linux-android21'
)

declare cflags='-O2 -fno-math-errno'
declare ldflags32='-Xlinker --no-undefined'
declare ldflags64="${ldflags32} -l m"

for triplet in "${targets[@]}"; do
	declare name="${triplet::-2}"
	declare tarball_filename="${name}.tar.xz"
	declare ldflags="${ldflags32}"
	
	if [ "${name}" = 'mips64el-unknown-linux-android' ] || [ "${name}" = 'x86_64-unknown-linux-android' ] || [ "${name}" = 'riscv64-unknown-linux-android' ] || [ "${name}" = 'aarch64-unknown-linux-android' ]; then
		ldflags="${ldflags64}"
		rm "${PINO_HOME}/${triplet}/lib/libm.so"
		# rm "${PINO_HOME}/${triplet}/lib/static/libm.so"
	fi
	
	"${triplet}-gcc" -g -c ${cflags} 'math.c'
	"${triplet}-ar" rcs 'libpino-math.a' 'math.o'
	
	"${triplet}-gcc" 'math.o' ${ldflags} -shared -o 'libpino-math.so'
	
	if [ "${name}" = 'i686-unknown-linux-android' ] || [ "${name}" = 'armv7-unknown-linux-androideabi' ] || [ "${name}" = 'armv5-unknown-linux-androideabi' ] || [ "${name}" = 'mipsel-unknown-linux-android' ]; then
		"${triplet}-gcc" -g -c ${cflags} 'mmap64.c'
		"${triplet}-ar" rcs 'libpino-mman.a' 'mmap64.o'
		
		"${triplet}-gcc" ${ldflags} 'mmap64.o' -shared -o 'libpino-mman.so'
	fi
	
	tar --create --file=- 'libpino-'* | xz --compress -9 > "${tarball_filename}"
	sha256sum "${tarball_filename}" > "${tarball_filename}.sha256"
	ls
	rm --force './'*'.'{a,so,o}
done
