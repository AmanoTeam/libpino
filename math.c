#include <sys/cdefs.h>

#if !defined(complex)
	#define complex _Complex
#endif

#if !__BIONIC_AVAILABILITY_GUARD(21)
int isinf(double __x) { 
	return __builtin_isinf(__x);
}

int isnan(double __x) { 
	return __builtin_isnan(__x);
}

long double acosl(long double __x) { 
	return __builtin_acosl(__x);
}

long double asinl(long double __x) { 
	return __builtin_asinl(__x);
}

static double atan2(double __y, double __x) { 
	return __builtin_atan2(__y, __x);
}

static float atan2f(float __y, float __x) { 
	return __builtin_atan2f(__y, __x);
}

long double atanl(long double __x) {  
	return __builtin_atanl(__x);
}

long double atan2l(long double __y, long double __x) { 
	return __builtin_atan2l(__y, __x);
}

long double cosl(long double __x) {  
	return __builtin_cosl(__x);
}

long double sinl(long double __x) { 
	return __builtin_sinl(__x);
}

long double tanl(long double __x) { 
	return __builtin_tanl(__x);
}

long double acoshl(long double __x) {  
	return __builtin_acoshl(__x);
}

long double asinhl(long double __x) { 
	return __builtin_asinhl(__x);
}

long double atanhl(long double __x) {  
	return __builtin_atanhl(__x);
}

long double coshl(long double __x) { 
	return __builtin_coshl(__x);
}

long double sinhl(long double __x) { 
	return __builtin_sinhl(__x);
}

long double tanhl(long double __x) { 
	return __builtin_tanhl(__x);
}

long double expl(long double __x) { 
	return __builtin_expl(__x);
}

long double exp2l(long double __x) { 
	return __builtin_exp2l(__x);
}

long double expm1l(long double __x) { 
	return __builtin_expm1l(__x);
}

long double frexpl(long double __x, int* __exponent) { 
	return __builtin_frexpl(__x, __exponent);
}

int ilogbl(long double __x) { 
	return __builtin_ilogbl(__x);
}

long double ldexpl(long double __x, int __exponent) { 
	return __builtin_ldexpl(__x, __exponent);
}

long double logl(long double __x) { 
	return __builtin_logl(__x);
}

long double log10l(long double __x) { 
	return __builtin_log10l(__x);
}

long double log1pl(long double __x) { 
	return __builtin_log1pl(__x);
}

double log2(double __x) { 
	return __builtin_log2(__x);
}

float log2f(float __x) { 
	return __builtin_log2f(__x);
}

long double log2l(long double __x) { 
	return __builtin_log2l(__x);
}

long double logbl(long double __x) { 
	return __builtin_logbl(__x);
}

long double modfl(long double __x, long double* __integral_part) { 
	return __builtin_modfl(__x, __integral_part);
}

long double scalbnl(long double __x, int __exponent) { 
	return __builtin_scalbnl(__x, __exponent);
}

long double scalblnl(long double __x, long __exponent) { 
	return __builtin_scalblnl(__x, __exponent);
}

long double cbrtl(long double __x) { 
	return __builtin_cbrtl(__x);
}

long double fabsl(long double __x) { 
	return __builtin_fabsl(__x);
}

long double hypotl(long double __x, long double __y) { 
	return __builtin_hypotl(__x, __y);
}

long double powl(long double __x, long double __y) { 
	return __builtin_powl(__x, __y);
}

long double sqrtl(long double __x) { 
	return __builtin_sqrtl(__x);
}

long double erfl(long double __x) { 
	return __builtin_erfl(__x);
}

long double erfcl(long double __x) { 
	return __builtin_erfcl(__x);
}

long double lgammal(long double __x) { 
	return __builtin_lgammal(__x);
}

long double tgammal(long double __x) { 
	return __builtin_tgammal(__x);
}

long double ceill(long double __x) { 
	return __builtin_ceill(__x);
}

long double floorl(long double __x) { 
	return __builtin_floorl(__x);
}

long double nearbyintl(long double __x) { 
	return __builtin_nearbyintl(__x);
}

long double rintl(long double __x) { 
	return __builtin_rintl(__x);
}

long lrintl(long double __x) { 
	return __builtin_lrintl(__x);
}

long long llrintl(long double __x) { 
	return __builtin_llrintl(__x);
}

long double roundl(long double __x) { 
	return __builtin_roundl(__x);
}

long lroundl(long double __x) { 
	return __builtin_lroundl(__x);
}

long long llroundl(long double __x) { 
	return __builtin_llroundl(__x);
}

long double truncl(long double __x) { 
	return __builtin_truncl(__x);
}

long double fmodl(long double __x, long double __y) { 
	return __builtin_fmodl(__x, __y);
}

long double remainderl(long double __x, long double __y) { 
	return __builtin_remainderl(__x, __y);
}

long double remquol(long double __x, long double __y, int* __quotient_bits) { 
	return __builtin_remquol(__x, __y, __quotient_bits);
}

long double copysignl(long double __value, long double __sign) { 
	return __builtin_copysignl(__value, __sign);
}

long double nanl(const char* __kind) { 
	return __builtin_nanl(__kind);
}

long double nextafterl(long double __x, long double __y) { 
	return __builtin_nextafterl(__x, __y);
}

long double nexttowardl(long double __x, long double __y) { 
	return __builtin_nexttowardl(__x, __y);
}

long double fdiml(long double __x, long double __y) { 
	return __builtin_fdiml(__x, __y);
}

long double fmaxl(long double __x, long double __y) { 
	return __builtin_fmaxl(__x, __y);
}

long double fminl(long double __x, long double __y) { 
	return __builtin_fminl(__x, __y);
}

long double fmal(long double __x, long double __y, long double __z) { 
	return __builtin_fmal(__x, __y, __z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(21) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cacos(double complex __z) { 
	return __builtin_cacos(__z);
}

float complex cacosf(float complex __z) { 
	return __builtin_cacosf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cacosl(long double complex __z) { 
	return __builtin_cacosl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex casin(double complex __z) { 
	return __builtin_casin(__z);
}

float complex casinf(float complex __z) { 
	return __builtin_casinf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex casinl(long double complex __z) { 
	return __builtin_casinl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex catan(double complex __z) { 
	return __builtin_catan(__z);
}

float complex catanf(float complex __z) { 
	return __builtin_catanf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex catanl(long double complex __z) { 
	return __builtin_catanl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ccos(double complex __z) { 
	return __builtin_ccos(__z);
}

float complex ccosf(float complex __z) { 
	return __builtin_ccosf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ccosl(long double complex __z) { 
	return __builtin_ccosl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex csin(double complex __z) { 
	return __builtin_csin(__z);
}

float complex csinf(float complex __z) { 
	return __builtin_csinf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex csinl(long double complex __z) { 
	return __builtin_csinl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ctan(double complex __z) { 
	return __builtin_ctan(__z);
}

float complex ctanf(float complex __z) { 
	return __builtin_ctanf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ctanl(long double complex __z) { 
	return __builtin_ctanl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cacosh(double complex __z) { 
	return __builtin_cacosh(__z);
}

float complex cacoshf(float complex __z) { 
	return __builtin_cacoshf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cacoshl(long double complex __z) { 
	return __builtin_cacoshl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex casinh(double complex __z) { 
	return __builtin_casinh(__z);
}

float complex casinhf(float complex __z) { 
	return __builtin_casinhf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex casinhl(long double complex __z) { 
	return __builtin_casinhl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex catanh(double complex __z) { 
	return __builtin_catanh(__z);
}

float complex catanhf(float complex __z) { 
	return __builtin_catanhf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex catanhl(long double complex __z) { 
	return __builtin_catanhl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ccosh(double complex __z) { 
	return __builtin_ccosh(__z);
}

float complex ccoshf(float complex __z) { 
	return __builtin_ccoshf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ccoshl(long double complex __z) { 
	return __builtin_ccoshl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex csinh(double complex __z) { 
	return __builtin_csinh(__z);
}

float complex csinhf(float complex __z) { 
	return __builtin_csinhf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex csinhl(long double complex __z) { 
	return __builtin_csinhl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex ctanh(double complex __z) { 
	return __builtin_ctanh(__z);
}

float complex ctanhf(float complex __z) { 
	return __builtin_ctanhf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex ctanhl(long double complex __z) { 
	return __builtin_ctanhl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cexp(double complex __z) { 
	return __builtin_cexp(__z);
}

float complex cexpf(float complex __z) { 
	return __builtin_cexpf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cexpl(long double complex __z) { 
	return __builtin_cexpl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex clog(double complex __z) { 
	return __builtin_clog(__z);
}

float complex clogf(float complex __z) { 
	return __builtin_clogf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex clogl(long double complex __z) { 
	return __builtin_clogl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double cabs(double complex __z) { 
	return __builtin_cabs(__z);
}

float cabsf(float complex __z) { 
	return __builtin_cabsf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double cabsl(long double complex __z) { 
	return __builtin_cabsl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cpow(double complex __x, double complex __z) { 
	return __builtin_cpow(__x, __z);
}

float complex cpowf(float complex __x, float complex __z) { 
	return __builtin_cpowf(__x, __z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cpowl(long double complex __x, long double complex __z) { 
	return __builtin_cpowl(__x, __z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex csqrt(double complex __z) { 
	return __builtin_csqrt(__z);
}

float complex csqrtf(float complex __z) { 
	return __builtin_csqrtf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex csqrtl(long double complex __z) { 
	return __builtin_csqrtl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double carg(double complex __z) { 
	return __builtin_carg(__z);
}

float cargf(float complex __z) { 
	return __builtin_cargf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double cargl(long double complex __z) { 
	return __builtin_cargl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double cimag(double complex __z) { 
	return __builtin_cimag(__z);
}

float cimagf(float complex __z) { 
	return __builtin_cimagf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double cimagl(long double complex __z) { 
	return __builtin_cimagl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex conj(double complex __z) { 
	return __builtin_conj(__z);
}

float complex conjf(float complex __z) { 
	return __builtin_conjf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex conjl(long double complex __z) { 
	return __builtin_conjl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double complex cproj(double complex __z) { 
	return __builtin_cproj(__z);
}

float complex cprojf(float complex __z) { 
	return __builtin_cprojf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double complex cprojl(long double complex __z) { 
	return __builtin_cprojl(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */

#if !__BIONIC_AVAILABILITY_GUARD(23)
double creal(double complex __z) { 
	return __builtin_creal(__z);
}

float crealf(float complex __z) { 
	return __builtin_crealf(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(23) */

#if !__BIONIC_AVAILABILITY_GUARD(26)
long double creall(long double complex __z) { 
	return __builtin_creall(__z);
}
#endif /* __BIONIC_AVAILABILITY_GUARD(26) */
