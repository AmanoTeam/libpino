#include <sys/cdefs.h>

__BEGIN_DECLS

#if !defined(complex)
	#define complex _Complex
#endif

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cacos(double complex __z); 
float complex cacosf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cacosl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex casin(double complex __z); 
float complex casinf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex casinl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex catan(double complex __z); 
float complex catanf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex catanl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ccos(double complex __z); 
float complex ccosf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ccosl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex csin(double complex __z); 
float complex csinf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex csinl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ctan(double complex __z); 
float complex ctanf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ctanl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cacosh(double complex __z); 
float complex cacoshf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cacoshl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex casinh(double complex __z); 
float complex casinhf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex casinhl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex catanh(double complex __z); 
float complex catanhf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex catanhl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ccosh(double complex __z); 
float complex ccoshf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ccoshl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex csinh(double complex __z); 
float complex csinhf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex csinhl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ctanh(double complex __z); 
float complex ctanhf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ctanhl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cexp(double complex __z); 
float complex cexpf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cexpl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex clog(double complex __z); 
float complex clogf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex clogl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double cabs(double complex __z); 
float cabsf(float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double cabsl(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cpow(double complex __x, double complex __z); 
float complex cpowf(float complex __x, float complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cpowl(long double complex __x, long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex csqrt(double complex __z); 
float complex csqrtf(float complex __z); 
long double complex csqrtl(long double complex __z); 

double carg(double complex __z); 
float cargf(float complex __z); 
long double cargl(long double complex __z); 

double cimag(double complex __z); 
float cimagf(float complex __z); 
long double cimagl(long double complex __z); 

double complex conj(double complex __z); 
float complex conjf(float complex __z); 
long double complex conjl(long double complex __z); 

double complex cproj(double complex __z); 
float complex cprojf(float complex __z); 
long double complex cprojl(long double complex __z); 

double creal(double complex __z); 
float crealf(float complex __z); 
long double creall(long double complex __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

__END_DECLS

#pragma once
