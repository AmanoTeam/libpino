#include <sys/cdefs.h>

__BEGIN_DECLS

#if !__BIONIC_AVAILABILITY_GUARD(21)
int isinf(double __x); 
int isnan(double __x); 
long double acosl(long double __x); 
long double asinl(long double __x); 
long double atanl(long double __x);  
long double atan2l(long double __y, long double __x); 
long double cosl(long double __x);  
long double sinl(long double __x); 
long double tanl(long double __x); 
long double acoshl(long double __x);  
long double asinhl(long double __x); 
long double atanhl(long double __x);  
long double coshl(long double __x); 
long double sinhl(long double __x); 
long double tanhl(long double __x); 
long double expl(long double __x); 
long double exp2l(long double __x); 
long double expm1l(long double __x); 
long double frexpl(long double __x, int* __exponent); 
int ilogbl(long double __x); 
long double ldexpl(long double __x, int __exponent); 
long double logl(long double __x); 
long double log10l(long double __x); 
long double log1pl(long double __x); 
double log2(double __x); 
float log2f(float __x); 
long double log2l(long double __x); 
long double logbl(long double __x); 
long double modfl(long double __x, long double* __integral_part); 
long double scalbnl(long double __x, int __exponent); 
long double scalblnl(long double __x, long __exponent); 
long double cbrtl(long double __x); 
long double fabsl(long double __x); 
long double hypotl(long double __x, long double __y); 
long double powl(long double __x, long double __y); 
long double sqrtl(long double __x); 
long double erfl(long double __x); 
long double erfcl(long double __x); 
long double lgammal(long double __x); 
long double tgammal(long double __x); 
long double ceill(long double __x); 
long double floorl(long double __x); 
long double nearbyintl(long double __x); 
long double rintl(long double __x); 
long lrintl(long double __x); 
long long llrintl(long double __x); 
long double roundl(long double __x); 
long lroundl(long double __x); 
long long llroundl(long double __x); 
long double truncl(long double __x); 
long double fmodl(long double __x, long double __y); 
long double remainderl(long double __x, long double __y); 
long double remquol(long double __x, long double __y, int* __quotient_bits); 
long double copysignl(long double __value, long double __sign); 
long double nanl(const char* __kind); 
long double nextafterl(long double __x, long double __y); 
long double nexttowardl(long double __x, long double __y); 
long double fdiml(long double __x, long double __y); 
long double fmaxl(long double __x, long double __y); 
long double fminl(long double __x, long double __y); 
long double fmal(long double __x, long double __y, long double __z); 
#endif /* __BIONIC_AVAILABILITY_GUARD(21) */

__END_DECLS

#pragma once
