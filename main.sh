#!/bin/bash

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
declare ldflags='-Xlinker --no-undefined'

for triplet in "${targets[@]}"; do
	declare name="${triplet::-2}"
	declare tarball_filename="${name}.tar.xz"
	
	"${triplet}-gcc" -g -c ${cflags} 'math.c'
	"${triplet}-ar" rcs 'libpino-math.a' 'math.o'
	
	"${triplet}-gcc" ${ldflags} -shared 'math.o' -o 'libpino-math.so'
	
	"${triplet}-gcc" -g -c ${cflags} 'mmap64.c'
	"${triplet}-ar" rcs 'libpino-mman.a' 'mmap64.o'
	
	"${triplet}-gcc" ${ldflags} -shared 'mmap64.o' -o 'libpino-mman.so'
	
	tar --create --file=- 'libpino-'* | xz --compress -9 > "${tarball_filename}"
	sha256sum "${tarball_filename}" > "${tarball_filename}.sha256"
done
