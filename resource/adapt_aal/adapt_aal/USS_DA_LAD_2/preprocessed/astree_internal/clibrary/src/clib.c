# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * This file implements stubs for frequently used library functions
 * using Astree directives. See missing.c for functions that have not
 * been properly implemented.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */

# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\assert.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */

# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */



/* utility */




/* basic */
# 74 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* char */
# 126 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* short */
# 158 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* int */
# 189 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* long */
# 220 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* long long */
# 274 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* float */
# 303 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* double */
# 332 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* long double */
# 374 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* rounding mode */
# 388 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* __ASTREE_SIZE_MAX */
# 470 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 13 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\assert.h" 2
# 48 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\assert.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 17 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\errno.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */







extern int errno;
# 196 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\errno.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 18 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\ctype.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */







int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 19 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\fenv.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */







/* FP exception flags. Example values corresponding to the x87 fpu control word. */
# 45 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\fenv.h"
/* Rounding modes. Example values corresponding to the x87 fpu control word. */
# 63 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\fenv.h"
/* Exception flag type. */
typedef unsigned short int fexcept_t;

/* Dummy representation of the floating point environment. */
typedef struct {
    fexcept_t __fexcept;
    int __roundMode;
} fenv_t;

extern fenv_t __astree_default_fenv;






int feclearexcept(int excepts);
int fegetexceptflag(fexcept_t *flagp, int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(const fexcept_t *flagp, int excepts);
int fetestexcept(int excepts);
int fegetround(void);
int fesetround(int round);
int fegetenv(fenv_t *envp);
int feholdexcept(fenv_t *envp);
int fesetenv(const fenv_t *envp);
int feupdateenv(const fenv_t *envp);





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 20 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */



# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdint.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * ---------------------------------------------------------------------- */






typedef signed char int8_t;

typedef signed short int16_t;
typedef signed int int32_t;

typedef signed long long int int64_t;


typedef unsigned char uint8_t;

typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef unsigned long long int uint64_t;


typedef long int intptr_t;
typedef long unsigned int uintptr_t;


typedef int8_t int_least8_t;

typedef int16_t int_least16_t;
typedef int32_t int_least32_t;

typedef int64_t int_least64_t;


typedef uint8_t uint_least8_t;

typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;

typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;

typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;

typedef int64_t int_fast64_t;


typedef uint8_t uint_fast8_t;

typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;

typedef uint64_t uint_fast64_t;


typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 242 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdint.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 15 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stddef.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 20 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stddef.h"
typedef long int ptrdiff_t;
typedef long unsigned int size_t;


typedef int wchar_t;
# 39 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stddef.h"
/**
 * Map to offsetof of Astree's C frontend. Still requires a macro
 * for compatibility with C11 §7.19p3.
 */



typedef int errno_t; /* C11 */


typedef double long max_align_t; /* C11 */

typedef size_t rsize_t; /* C11 */





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 16 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_restrict.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:2011 standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */



/* control use of restrict keyword: not defined for C++ and C90 */






/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 17 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h" 2





typedef struct {
    intmax_t quot;
    intmax_t rem;
} imaxdiv_t;
# 35 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Macros for printing format specifiers.  */

/* Decimal notation.  */
# 68 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Octal notation.  */
# 84 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Unsigned integers.  */
# 100 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* lowercase hexadecimal notation.  */
# 116 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* UPPERCASE hexadecimal notation.  */
# 133 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Macros for printing `intmax_t' and `uintmax_t'.  */
# 142 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Macros for printing `intptr_t' and `uintptr_t'.  */
# 151 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Macros for scanning format specifiers.  */

/* Signed decimal notation.  */
# 169 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Signed decimal notation.  */
# 185 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Unsigned decimal notation.  */
# 201 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Octal notation.  */
# 217 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Hexadecimal notation.  */
# 234 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\inttypes.h"
/* Macros for scanning `intmax_t' and `uintmax_t'.  */






/* Macros for scaning `intptr_t' and `uintptr_t'.  */






intmax_t imaxabs(intmax_t j);
imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);
intmax_t strtoimax(const char* restrict nptr, char** restrict endptr, int base);
uintmax_t strtoumax(const char* restrict nptr, char** restrict endptr, int base);
intmax_t wcstoimax(const wchar_t* restrict nptr, wchar_t** restrict endptr, int base);
uintmax_t wcstoumax(const wchar_t* restrict nptr, wchar_t** restrict endptr, int base);





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 21 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\limits.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */





/* char */
# 32 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\limits.h"
/* short */
# 42 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\limits.h"
/* int */
# 52 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\limits.h"
/* long */
# 62 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\limits.h"
/* long long */
# 72 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\limits.h"
/* max number of bytes in a multibyte character */




/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 22 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\locale.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */







struct lconv {
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char* currency_symbol;
    char frac_digits;
    char p_cs_precedes;
    char n_cs_precedes;
    char p_sep_by_space;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char* int_curr_symbol;
    char int_frac_digits;
    char int_p_cs_precedes;
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
# 79 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\locale.h"
char* setlocale(int category, const char* locale);
struct lconv* localeconv(void);
# 181 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\locale.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 23 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 20 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
typedef float float_t;
typedef double double_t;
# 49 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
/* macros required by the standard */
# 61 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
enum {
    FP_INFINITE,
    FP_NAN,
    FP_NORMAL,
    FP_SUBNORMAL,
    FP_ZERO,
};

/* FP_FAST_FMA, FP_FAST_FMAF, FP_FAST_FMAL not supported */
# 85 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
typedef float __astree_float;
typedef double __astree_double;
typedef long double __astree_long_double;
# 121 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
static inline int __astree_signbit_f(float x)
{
    __ASTREE_attributes((raise_at_caller));
    int any = 0;
    __ASTREE_modify((any; [0, 1]));
    return (x) < 0.0f ? 1 : ((x) > 0.0f ? 0 : any);
}

static inline int __astree_signbit_d(double x)
{
    __ASTREE_attributes((raise_at_caller));
    int any = 0;
    __ASTREE_modify((any; [0, 1]));
    return (x) < 0.0 ? 1 : ((x) > 0.0 ? 0 : any);
}

static inline int __astree_signbit_ld(long double x)
{
    __ASTREE_attributes((raise_at_caller));
    int any = 0;
    __ASTREE_modify((any; [0, 1]));
    return (x) < 0.0L ? 1 : ((x) > 0.0L ? 0 : any);
}







double acos(double x);
float acosf(float x);
long double acosl(long double x);
double asin(double x);
float asinf(float x);
long double asinl(long double x);
double atan(double x);
float atanf(float x);
long double atanl(long double x);
double atan2(double y, double x);
float atan2f(float y, float x);
long double atan2l(long double y, long double x);
double cos(double x);
float cosf(float x);
long double cosl(long double x);
double sin(double x);
float sinf(float x);
long double sinl(long double x);
double tan(double x);
float tanf(float x);
long double tanl(long double x);
double acosh(double x);
float acoshf(float x);
long double acoshl(long double x);
double asinh(double x);
float asinhf(float x);
long double asinhl(long double x);
double atanh(double x);
float atanhf(float x);
long double atanhl(long double x);
double cosh(double x);
float coshf(float x);
long double coshl(long double x);
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);
double exp(double x);
float expf(float x);
long double expl(long double x);
double exp2(double x);
float exp2f(float x);
long double exp2l(long double x);
double expm1(double x);
float expm1f(float x);
long double expm1l(long double x);
double frexp(double value, int *exp);
float frexpf(float value, int *exp);
long double frexpl(long double value, int *exp);
int ilogb(double x);
int ilogbf(float x);
int ilogbl(long double x);
double ldexp(double x, int exp);
float ldexpf(float x, int exp);
long double ldexpl(long double x, int exp);
double log(double x);
float logf(float x);
long double logl(long double x);
double log10(double x);
float log10f(float x);
long double log10l(long double x);
double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);
double log2(double x);
float log2f(float x);
long double log2l(long double x);
double logb(double x);
float logbf(float x);
long double logbl(long double x);
double modf(double value, double *iptr);
float modff(float value, float *iptr);
long double modfl(long double value, long double *iptr);
double scalbn(double x, int n);
float scalbnf(float x, int n);
long double scalbnl(long double x, int n);
double scalbln(double x, long int n);
float scalblnf(float x, long int n);
long double scalblnl(long double x, long int n);
double cbrt(double x);
float cbrtf(float x);
long double cbrtl(long double x);
double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);
double hypot(double x, double y);
float hypotf(float x, float y);
long double hypotl(long double x, long double y);
double pow(double x, double y);
float powf(float x, float y);
long double powl(long double x, long double y);
double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);
double erf(double x);
float erff(float x);
long double erfl(long double x);
double erfc(double x);
float erfcf(float x);
long double erfcl(long double x);
double lgamma(double x);
float lgammaf(float x);
long double lgammal(long double x);
double tgamma(double x);
float tgammaf(float x);
long double tgammal(long double x);
double ceil(double x);
float ceilf(float x);
long double ceill(long double x);
double floor(double x);
float floorf(float x);
long double floorl(long double x);
double nearbyint(double x);
float nearbyintf(float x);
long double nearbyintl(long double x);
double rint(double x);
float rintf(float x);
long double rintl(long double x);
long int lrint(double x);
long int lrintf(float x);
long int lrintl(long double x);
long long int llrint(double x);
long long int llrintf(float x);
long long int llrintl(long double x);
double round(double x);
float roundf(float x);
long double roundl(long double x);
long int lround(double x);
long int lroundf(float x);
long int lroundl(long double x);
long long int llround(double x);
long long int llroundf(float x);
long long int llroundl(long double x);
double trunc(double x);
float truncf(float x);
long double truncl(long double x);
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);
double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);
double remquo(double x, double y, int *quo);
float remquof(float x, float y, int *quo);
long double remquol(long double x, long double y, int *quo);
double copysign(double x, double y);
float copysignf(float x, float y);
long double copysignl(long double x, long double y);
double nan(const char *tagp);
float nanf(const char *tagp);
long double nanl(const char *tagp);
double nextafter(double x, double y);
float nextafterf(float x, float y);
long double nextafterl(long double x, long double y);
double nexttoward(double x, long double y);
float nexttowardf(float x, long double y);
long double nexttowardl(long double x, long double y);
double fdim(double x, double y);
float fdimf(float x, float y);
long double fdiml(long double x, long double y);
double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);
double fmin(double x, double y);
float fminf(float x, float y);
long double fminl(long double x, long double y);
double fma(double x, double y, double z);
float fmaf(float x, float y, float z);
long double fmal(long double x, long double y, long double z);
# 339 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 24 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\setjmp.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */







typedef int jmp_buf[1];



int setjmp(jmp_buf env);


_Noreturn void longjmp(jmp_buf env, int val);





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 25 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\signal.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */







typedef int sig_atomic_t;

void astree_sig_dfl(int);
void astree_sig_err(int);
void astree_sig_ign(int);
# 37 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\signal.h"
/* sample values taken from Linux */
# 63 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\signal.h"
/* sample values taken from Linux */
# 93 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\signal.h"
void (*signal(int sig, void (*func)(int)))(int);
int raise(int sig);
# 135 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\signal.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 26 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdbool.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 26 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdbool.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 27 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdio.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */




# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdarg.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 45 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdarg.h"
/* can store a scalar argument of any size */
typedef union {
  int i;
  long l;
  long long ll;
  double d;
  long double dd;
  void *p;
} ASTREE_va_arg_any;

typedef ASTREE_va_arg_any *va_list;
# 68 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdarg.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 16 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdio.h" 2






typedef struct { char dummy; } FILE;

typedef int fpos_t;
# 85 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdio.h"
extern FILE* stderr;
extern FILE* stdin;
extern FILE* stdout;

int remove(const char *filename);
int rename(const char *oldname, const char *newname);
FILE* tmpfile(void);
char* tmpnam(char* s);
int fclose(FILE* stream);
int fflush(FILE* stream);
FILE* fopen(const char* restrict filename, const char* restrict mode);
FILE* freopen(const char* restrict filename, const char* restrict mode, FILE* stream);
void setbuf(FILE* restrict stream, char* restrict buf);
int setvbuf(FILE* restrict stream, char* restrict buf, int mode, size_t size);





int fprintf(FILE* restrict stream, const char* restrict format, ...);
int fscanf(FILE* restrict stream, const char* restrict format, ...);
int printf(const char* restrict format, ...);
int scanf(const char* restrict format, ...);
int sprintf(char* restrict sm, const char* restrict format, ...);
int sscanf(const char* restrict sm, const char* restrict format, ...);
int snprintf(char* restrict s, size_t n, const char* restrict format, ...);

int vfprintf(FILE* restrict stream, const char* restrict format, va_list arg);
int vfscanf(FILE* restrict stream, const char* restrict format, va_list arg);
int vprintf(const char* restrict format, va_list arg);
int vscanf(const char* restrict format, va_list arg);
int vsnprintf(char* restrict s, size_t n, const char* restrict format, va_list arg);
int vsprintf(char* restrict s, const char* restrict format, va_list arg);
int vsscanf(const char* restrict s, const char* restrict format, va_list arg);

int fgetc(FILE* stream);
char* fgets(char* restrict s, int n, FILE* restrict stream);
int fputc(int c, FILE* stream);
int fputs(const char* restrict s, FILE* restrict stream);
int getc(FILE* stream);
int getchar(void);

char* gets(char* s); /* removed in c11 */

int putc(int c, FILE* stream);
int putchar(int c);
int puts(const char* s);
int ungetc(int c, FILE* stream);
size_t fread(void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream);
size_t fwrite(const void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream);
int fgetpos(FILE* restrict stream, fpos_t* restrict pos);
int fseek(FILE* stream, long int offset, int whence);
int fsetpos(FILE* stream, const fpos_t* pos);
long int ftell(FILE* stream);
void rewind(FILE* stream);
void clearerr(FILE* stream);
int feof(FILE* stream);
int ferror(FILE* stream);
void perror(const char* s);
# 154 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdio.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 28 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdlib.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 22 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdlib.h"
typedef struct {
    int quot;
    int rem;
} div_t;

typedef struct {
    long int quot;
    long int rem;
} ldiv_t;

typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;
# 49 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\stdlib.h"
/* max bytes in multibyte char of current locale */





double atof(const char *nptr);
int atoi(const char *nptr);
long int atol(const char *nptr);
long long int atoll(const char *nptr);
double strtod(const char * restrict nptr, char ** restrict endptr);
float strtof(const char * restrict nptr, char ** restrict endptr);
long double strtold(const char * restrict nptr, char ** restrict endptr);
long int strtol(const char * restrict nptr, char ** restrict endptr, int base);
long long int strtoll(const char * restrict nptr, char ** restrict endptr, int base);
unsigned long int strtoul(const char * restrict nptr, char ** restrict endptr, int base);
unsigned long long int strtoull(const char * restrict nptr, char ** restrict endptr, int base);
int rand(void);
void srand(unsigned int seed);
void *aligned_alloc(size_t alignment, size_t size); /* C11 */
void *calloc(size_t nmemb, size_t size);
void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
_Noreturn void abort(void);
int atexit(void (*func)(void));
int at_quick_exit(void (*func)(void));
_Noreturn void exit(int status);
_Noreturn void _Exit(int status);
char *getenv(const char *name);
_Noreturn void quick_exit(int status);/* C11 */
int system(const char *string);
void *bsearch(const void *key, const void *base, size_t nmemb, size_t size,
int (*compar)(const void *, const void *));
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
int abs(int j);
long int labs(long int j);
long long int llabs(long long int j);
div_t div(int numer, int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);
int mblen(const char *s, size_t n);
int mbtowc(wchar_t * restrict pwc, const char * restrict s, size_t n);
int wctomb(char *s, wchar_t wchar);
size_t mbstowcs(wchar_t * restrict pwcs, const char * restrict s, size_t n);
size_t wcstombs(char * restrict s, const wchar_t * restrict pwcs, size_t n);





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 29 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\string.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 21 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\string.h"
void *memcpy(void * restrict s1, const void * restrict s2, size_t n);
void *memmove(void *s1, const void *s2, size_t n);
char *strcpy(char * restrict s1, const char * restrict s2);
errno_t strcpy_s(char *restrict dest, rsize_t destsz, const char *restrict src); /* C11 */
char *strncpy(char * restrict s1, const char * restrict s2, size_t n);
char *strcat(char * restrict s1, const char * restrict s2);
char *strncat(char * restrict s1, const char * restrict s2, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int strcmp(const char *s1, const char *s2);
int strcoll(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
size_t strxfrm(char * restrict s1, const char * restrict s2, size_t n);
void *memchr(const void *s, int c, size_t n);
char *strchr(const char *s, int c);
size_t strcspn(const char *s1, const char *s2);
char *strpbrk(const char *s1, const char *s2);
char *strrchr(const char *s, int c);
size_t strspn(const char *s1, const char *s2);
char *strstr(const char *s1, const char *s2);
char *strtok(char * restrict s1, const char * restrict s2);
void *memset(void *s, int c, size_t n);
char *strerror(int errnum);
size_t strlen(const char *s);
# 54 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\string.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 30 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\time.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 32 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\time.h"
typedef unsigned long clock_t;

typedef unsigned long time_t;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

clock_t clock(void);
double difftime(time_t time1, time_t time0);
time_t mktime(struct tm *timeptr);
time_t time(time_t *timer);

char *asctime(const struct tm *timeptr);
char *ctime(const time_t *timer);
struct tm *gmtime(const time_t *timer);
struct tm *localtime(const time_t *timer);
size_t strftime(char * restrict s, size_t maxsize, const char * restrict format, const struct tm * restrict timeptr);


struct timespec { /* C11 */
    time_t tv_sec;
    long tv_nsec;
};
int timespec_get(struct timespec *ts, int base); /* C11 */
int nanosleep(const struct timespec *req, struct timespec *rem); /* POSIX */





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 31 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wchar.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 23 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wchar.h"
typedef unsigned mbstate_t;
struct tm;



typedef int wint_t;
# 53 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wchar.h"
int fwprintf(FILE * restrict stream, const wchar_t * restrict format, ...);
int fwscanf(FILE * restrict stream, const wchar_t * restrict format, ...);
int swprintf(wchar_t * restrict s, size_t n, const wchar_t * restrict format, ...);
int swscanf(const wchar_t * restrict s, const wchar_t * restrict format, ...);
int wprintf(const wchar_t * restrict format, ...);
int wscanf(const wchar_t * restrict format, ...);

int vfwprintf(FILE * restrict stream, const wchar_t * restrict format, va_list arg);
int vfwscanf(FILE * restrict stream, const wchar_t * restrict format, va_list arg);
int vswprintf(wchar_t * restrict s, size_t n, const wchar_t * restrict format, va_list arg);
int vswscanf(const wchar_t * restrict s, const wchar_t * restrict format, va_list arg);
int vwprintf(const wchar_t * restrict format, va_list arg);
int vwscanf(const wchar_t * restrict format, va_list arg);
wint_t fgetwc(FILE *stream);
wchar_t *fgetws(wchar_t * restrict s, int n, FILE * restrict stream);
wint_t fputwc(wchar_t c, FILE *stream);
int fputws(const wchar_t * restrict s, FILE * restrict stream);
int fwide(FILE *stream, int mode);
wint_t getwc(FILE *stream);
wint_t getwchar(void);
wint_t putwc(wchar_t c, FILE *stream);
wint_t putwchar(wchar_t c);
wint_t ungetwc(wint_t c, FILE *stream);
double wcstod(const wchar_t * restrict nptr, wchar_t ** restrict endptr);
float wcstof(const wchar_t * restrict nptr, wchar_t ** restrict endptr);
long double wcstold(const wchar_t * restrict nptr, wchar_t ** restrict endptr);
long int wcstol(const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base);
long long int wcstoll(const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base);
unsigned long int wcstoul(const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base);
unsigned long long int wcstoull(const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base);
wchar_t *wcscpy(wchar_t * restrict s1, const wchar_t * restrict s2);
wchar_t *wcsncpy(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);
wchar_t *wcscat(wchar_t * restrict s1, const wchar_t * restrict s2);
wchar_t *wcsncat(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);
int wcscmp(const wchar_t *s1, const wchar_t *s2);
int wcscoll(const wchar_t *s1, const wchar_t *s2);
int wcsncmp(const wchar_t *s1, const wchar_t *s2, size_t n);
size_t wcsxfrm(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);
wchar_t *wcschr(const wchar_t *s, wchar_t c);
size_t wcscspn(const wchar_t *s1, const wchar_t *s2);
size_t wcslen(const wchar_t *s);
wchar_t *wcspbrk(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcsrchr(const wchar_t *s, wchar_t c);
size_t wcsspn(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcsstr(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcstok(wchar_t * restrict s1, const wchar_t * restrict s2,
  wchar_t ** restrict ptr);
wchar_t *wmemchr(const wchar_t *s, wchar_t c, size_t n);
int wmemcmp(const wchar_t *s1, const wchar_t *s2, size_t n);
wchar_t *wmemcpy(wchar_t *s1, const wchar_t *s2, size_t n);
wchar_t *wmemmove(wchar_t *s1, const wchar_t *s2, size_t n);
wchar_t *wmemset(wchar_t *s, wchar_t c, size_t n);
size_t wcsftime(wchar_t * restrict s, size_t maxsize, const wchar_t * restrict format, const struct tm * restrict timeptr);
wint_t btowc(int c);
int wctob(wint_t c);
int mbsinit(const mbstate_t *ps);
size_t mbrlen(const char * restrict s, size_t n, mbstate_t * restrict ps);
size_t mbrtowc(wchar_t * restrict pwc, const char * restrict s, size_t n, mbstate_t * restrict ps);
size_t wcrtomb(char * restrict s, wchar_t wc, mbstate_t * restrict ps);
size_t mbsrtowcs(wchar_t * restrict dst, const char ** restrict src, size_t len, mbstate_t * restrict ps);
size_t wcsrtombs(char * restrict dst, const wchar_t ** restrict src, size_t len, mbstate_t * restrict ps);
# 123 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wchar.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 32 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2
# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wctype.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */
# 20 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wctype.h"
typedef int* wctrans_t;
typedef long wctype_t;
# 35 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\wctype.h"
int iswalnum(wint_t wc);
int iswalpha(wint_t wc);
int iswblank(wint_t wc);
int iswcntrl(wint_t wc);
int iswdigit(wint_t wc);
int iswgraph(wint_t wc);
int iswlower(wint_t wc);
int iswprint(wint_t wc);
int iswpunct(wint_t wc);
int iswspace(wint_t wc);
int iswupper(wint_t wc);
int iswxdigit(wint_t wc);
int iswctype(wint_t wc, wctype_t desc);
wctype_t wctype(const char *property);
wint_t towlower(wint_t wc);
wint_t towupper(wint_t wc);
wint_t towctrans(wint_t wc, wctrans_t desc);
wctrans_t wctrans(const char *property);





/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 33 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c" 2

/* helper value [0, 1] */
static volatile int zero_or_one = 0;
__ASTREE_volatile_input((zero_or_one; [0, 1]));

/* helper value [1, oo] */
static volatile int one_to_inf = 1;
__ASTREE_volatile_input((one_to_inf; [1, 0x7FFFFFFF]));

/* helper value [-oo, -1] */
static volatile int m_inf_to_m_one = (-0x7FFFFFFF - 1);
__ASTREE_volatile_input((m_inf_to_m_one; [(-0x7FFFFFFF - 1), -1]));

/* helper value [-1, 0] */
static volatile int m_one_to_zero = -1;
__ASTREE_volatile_input((m_one_to_zero; [-1, 0]));

/* helper value [-oo, oo] */
static volatile int m_inf_to_inf = (-0x7FFFFFFF - 1);
__ASTREE_volatile_input((m_inf_to_inf; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));

/* helper value [0, oo] */
static volatile unsigned char uchar_zero_to_inf = 0;
__ASTREE_volatile_input((uchar_zero_to_inf; [0, 0xFF]));

/* helper value [0, oo] */
static volatile char char_zero_to_inf = 0;
__ASTREE_volatile_input((char_zero_to_inf; [0, 0x7F]));

/* helper value [-1, oo] long */
static volatile long long_m_one_to_inf = -1;
__ASTREE_volatile_input((long_m_one_to_inf; [-1, 0x7FFFFFFF]));

/*
 * errno.h
 */

int errno = 0;

/*
 * ctype.h
 */
# 103 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) int isalnum(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int isalpha(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int isblank(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iscntrl(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int isdigit(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));

 if (('0' <= c) && (c <= '9')) {
        return (!0);
    }

    return 0;
}


__attribute__((weak)) int isgraph(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int islower(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int isprint(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int ispunct(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int isspace(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int isupper(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int isxdigit(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int tolower(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}


__attribute__((weak)) int toupper(int c)
{
    if ((c) != (__astree_eof()) && ((c) < 0 || (c) > 0xFF)) __ASTREE_alarm((raise_at_caller; check_ctype_limits));
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}



/*
 * fenv.h
 */

fenv_t __astree_default_fenv;
__ASTREE_volatile_input((__astree_default_fenv.__fexcept; [0, 0xFFFF]));

__attribute__((weak)) int feclearexcept(int excepts)
{
    if(excepts < 0 || excepts > ( 0x04 | 0x20 | 0x01 | 0x08 | 0x10 ))
        __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    return zero_or_one;
}

__attribute__((weak)) int fegetexceptflag(fexcept_t *flagp, int excepts)
{
    if(excepts < 0 || excepts > ( 0x04 | 0x20 | 0x01 | 0x08 | 0x10 ))
        __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    if(zero_or_one){
        *flagp = __astree_default_fenv.__fexcept & excepts;
        return 0;
    }
    return 1;
}

__attribute__((weak)) int feraiseexcept(int excepts)
{
    if(excepts < 0 || excepts > ( 0x04 | 0x20 | 0x01 | 0x08 | 0x10 ))
        __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    return zero_or_one;
}

__attribute__((weak)) int fesetexceptflag(const fexcept_t *flagp, int excepts)
{
    if(excepts < 0 || excepts > ( 0x04 | 0x20 | 0x01 | 0x08 | 0x10 ))
        __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    if(zero_or_one){
        __astree_default_fenv.__fexcept = *flagp & excepts;
        return 0;
    }
    return 1;
}

__attribute__((weak)) int fetestexcept(int excepts)
{
    if(excepts < 0 || excepts > ( 0x04 | 0x20 | 0x01 | 0x08 | 0x10 ))
        __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    return __astree_default_fenv.__fexcept & excepts;
}

__attribute__((weak)) int fegetround(void)
{
    return __astree_default_fenv.__roundMode;
}

__attribute__((weak)) int fesetround(int round)
{
    __astree_default_fenv.__roundMode = round;
}

__attribute__((weak)) int fegetenv(fenv_t *envp)
{
    if(zero_or_one){
        envp = &__astree_default_fenv;
        return 0;
    }
    return 1;
}

__attribute__((weak)) int feholdexcept(fenv_t *envp)
{
    if(zero_or_one){
        envp = &__astree_default_fenv;
        return 0;
    }
    return 1;
}

__attribute__((weak)) int fesetenv(const fenv_t *envp)
{
    if(zero_or_one){
        __astree_default_fenv = *envp;
        return 0;
    }
    return 1;
}

__attribute__((weak)) int feupdateenv(const fenv_t *envp)
{
    if(zero_or_one){
        __astree_default_fenv = *envp;
        return 0;
    }
    return 1;
}

/*
 * inttypes.h
 */



__attribute__((weak)) intmax_t imaxabs(intmax_t j)
{
    return j < 0 ? -j : j;
}

/*
 * locale.h
 */

static struct lconv __locale;
static _Bool __locale_initialized = 0;

__attribute__((weak)) char* setlocale(int category, const char* locale)
{





    char* decimal_point; __ASTREE_initialize((decimal_point)); __locale.decimal_point = decimal_point;
    char* thousands_sep; __ASTREE_initialize((thousands_sep)); __locale.thousands_sep = thousands_sep;
    char* grouping; __ASTREE_initialize((grouping)); __locale.grouping = grouping;
    char* mon_decimal_point; __ASTREE_initialize((mon_decimal_point)); __locale.mon_decimal_point = mon_decimal_point;
    char* mon_thousands_sep; __ASTREE_initialize((mon_thousands_sep)); __locale.mon_thousands_sep = mon_thousands_sep;
    char* mon_grouping; __ASTREE_initialize((mon_grouping)); __locale.mon_grouping = mon_grouping;
    char* positive_sign; __ASTREE_initialize((positive_sign)); __locale.positive_sign = positive_sign;
    char* negative_sign; __ASTREE_initialize((negative_sign)); __locale.negative_sign = negative_sign;
    char* currency_symbol; __ASTREE_initialize((currency_symbol)); __locale.currency_symbol = currency_symbol;
    char frac_digits; __ASTREE_initialize((frac_digits)); __locale.frac_digits = frac_digits;
    char p_cs_precedes; __ASTREE_initialize((p_cs_precedes)); __locale.p_cs_precedes = p_cs_precedes;
    char n_cs_precedes; __ASTREE_initialize((n_cs_precedes)); __locale.n_cs_precedes = n_cs_precedes;
    char p_sep_by_space; __ASTREE_initialize((p_sep_by_space)); __locale.p_sep_by_space = p_sep_by_space;
    char n_sep_by_space; __ASTREE_initialize((n_sep_by_space)); __locale.n_sep_by_space = n_sep_by_space;
    char p_sign_posn; __ASTREE_initialize((p_sign_posn)); __locale.p_sign_posn = p_sign_posn;
    char n_sign_posn; __ASTREE_initialize((n_sign_posn)); __locale.n_sign_posn = n_sign_posn;
    char* int_curr_symbol; __ASTREE_initialize((int_curr_symbol)); __locale.int_curr_symbol = int_curr_symbol;
    char int_frac_digits; __ASTREE_initialize((int_frac_digits)); __locale.int_frac_digits = int_frac_digits;
    char int_p_cs_precedes; __ASTREE_initialize((int_p_cs_precedes)); __locale.int_p_cs_precedes = int_p_cs_precedes;
    char int_n_cs_precedes; __ASTREE_initialize((int_n_cs_precedes)); __locale.int_n_cs_precedes = int_n_cs_precedes;
    char int_p_sep_by_space; __ASTREE_initialize((int_p_sep_by_space)); __locale.int_p_sep_by_space = int_p_sep_by_space;
    char int_n_sep_by_space; __ASTREE_initialize((int_n_sep_by_space)); __locale.int_n_sep_by_space = int_n_sep_by_space;
    char int_p_sign_posn; __ASTREE_initialize((int_p_sign_posn)); __locale.int_p_sign_posn = int_p_sign_posn;
    char int_n_sign_posn; __ASTREE_initialize((int_n_sign_posn)); __locale.int_n_sign_posn = int_n_sign_posn;



    if (1 == category && ((void *)0) != locale && strlen(locale) == 1 && locale[0] == 'C') {
        __locale.decimal_point = ".";
        __locale.thousands_sep = "";
        __locale.grouping = "";
        __locale.mon_decimal_point = "";
        __locale.mon_grouping = "";
        __locale.positive_sign = "";
        __locale.negative_sign = "";
        __locale.currency_symbol = "";
        __locale.frac_digits = 0x7F;
        __locale.p_cs_precedes = 0x7F;
        __locale.n_cs_precedes = 0x7F;
        __locale.p_sep_by_space = 0x7F;
        __locale.n_sep_by_space = 0x7F;
        __locale.p_sign_posn = 0x7F;
        __locale.n_sign_posn = 0x7F;
        __locale.int_curr_symbol = "";
        __locale.int_frac_digits = 0x7F;
        __locale.int_p_cs_precedes = 0x7F;
        __locale.int_n_cs_precedes = 0x7F;
        __locale.int_p_sep_by_space = 0x7F;
        __locale.int_n_sep_by_space = 0x7F;
        __locale.int_p_sign_posn = 0x7F;
        __locale.int_n_sign_posn = 0x7F;
    }

    char* r;
    int twentythree = 0;
    __ASTREE_modify((twentythree; [0, 23]));
    switch (twentythree) {
    case 0:
      r = __locale.decimal_point;
      break;
    case 1:
      r = __locale.thousands_sep;
      break;
    case 2:
      r = __locale.grouping;
      break;
    case 3:
      r = __locale.mon_decimal_point;
      break;
    case 4:
      r = __locale.mon_grouping;
      break;
    case 5:
      r = __locale.positive_sign;
      break;
    case 6:
      r = __locale.negative_sign;
      break;
    case 7:
      r = __locale.currency_symbol;
      break;
    case 8:
      r = &__locale.frac_digits;
      break;
    case 9:
      r = &__locale.p_cs_precedes;
      break;
    case 10:
      r = &__locale.n_cs_precedes;
      break;
    case 11:
      r = &__locale.p_sep_by_space;
      break;
    case 12:
      r =& __locale.n_sep_by_space;
      break;
    case 13:
      r = &__locale.p_sign_posn;
      break;
    case 14:
      r = &__locale.n_sign_posn;
      break;
    case 15:
      r = __locale.int_curr_symbol;
      break;
    case 16:
      r = &__locale.int_frac_digits;
      break;
    case 17:
      r = &__locale.int_p_cs_precedes;
      break;
    case 18:
      r = &__locale.int_n_cs_precedes;
      break;
    case 19:
      r = &__locale.int_p_sep_by_space;
      break;
    case 20:
      r = &__locale.int_n_sep_by_space;
      break;
    case 21:
      r = &__locale.int_p_sign_posn;
      break;
    case 22:
      r = &__locale.int_n_sign_posn;
      break;
    default:
      r = ((void *)0);
      break;
    }

    __locale_initialized = 1;

    return r;
}

__attribute__((weak)) struct lconv* localeconv(void)
{
    if (! __locale_initialized) {
        __locale.decimal_point = ".";
        __locale.thousands_sep = "";
        __locale.grouping = "";
        __locale.mon_decimal_point = "";
        __locale.mon_thousands_sep = "";
        __locale.mon_grouping = "";
        __locale.positive_sign = "";
        __locale.negative_sign = "";
        __locale.currency_symbol = "";
        __locale.frac_digits = char_zero_to_inf;
        __locale.p_cs_precedes = char_zero_to_inf;
        __locale.n_cs_precedes = char_zero_to_inf;
        __locale.p_sep_by_space = char_zero_to_inf;
        __locale.n_sep_by_space = char_zero_to_inf;
        __locale.p_sign_posn = char_zero_to_inf;
        __locale.n_sign_posn = char_zero_to_inf;
        __locale.int_curr_symbol = "";
        __locale.int_frac_digits = char_zero_to_inf;
        __locale.int_p_cs_precedes = char_zero_to_inf;
        __locale.int_n_cs_precedes = char_zero_to_inf;
        __locale.int_p_sep_by_space = char_zero_to_inf;
        __locale.int_n_sep_by_space = char_zero_to_inf;
        __locale.int_p_sign_posn = char_zero_to_inf;
        __locale.int_n_sign_posn = char_zero_to_inf;

        __locale_initialized = 1;
    }

    return &__locale;
}

/*
 * math.h
 */

/* useful constants */
# 556 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double acos(double x)
{
    __typeof__(x) r, lo, hi; if (-1 <= x && x <= 1) { lo = _Generic(x, double: 0., float: 0.F); hi = _Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1); __ASTREE_modify((r; [lo, hi])); } else { if (x == x) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; } r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float acosf(float x)
{
    __typeof__(x) r, lo, hi; if (-1 <= x && x <= 1) { lo = _Generic(x, double: 0., float: 0.F); hi = _Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1); __ASTREE_modify((r; [lo, hi])); } else { if (x == x) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; } r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double asin(double x)
{
    __typeof__(x) r, lo, hi; if (-1 <= x && x <= 1) { lo = -(_Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1) / 2); hi = (_Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1) / 2); __ASTREE_modify((r; [lo, hi])); } else { if (x == x) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; } r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float asinf(float x)
{
    __typeof__(x) r, lo, hi; if (-1 <= x && x <= 1) { lo = -(_Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1) / 2); hi = (_Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1) / 2); __ASTREE_modify((r; [lo, hi])); } else { if (x == x) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; } r = __astree_not_a_number(); } return r;
}
# 586 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double atan(double x)
{
    __typeof__(x) r, val; if (x == x) { val = (_Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1) / 2); __ASTREE_modify((r; [-val, val])); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float atanf(float x)
{
    __typeof__(x) r, val; if (x == x) { val = (_Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1) / 2); __ASTREE_modify((r; [-val, val])); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double tanh(double x)
{
    __typeof__(x) r, val; if (x == x) { val = _Generic(x, double: 1., float: 1.F); __ASTREE_modify((r; [-val, val])); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float tanhf(float x)
{
    __typeof__(x) r, val; if (x == x) { val = _Generic(x, double: 1., float: 1.F); __ASTREE_modify((r; [-val, val])); } else { r = __astree_not_a_number(); } return r;
}
# 618 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double atan2(double y, double x)
{
    __typeof__(x) r, val; if (y == y && x == x) { if (y == 0 && x == 0) __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); val = _Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1); __ASTREE_modify((r; [-val, val])); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float atan2f(float y, float x)
{
    __typeof__(x) r, val; if (y == y && x == x) { if (y == 0 && x == 0) __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); val = _Generic(x, double: 0x1.921fb54442d18p+1, float: 0x1.921fb6p+1); __ASTREE_modify((r; [-val, val])); } else { r = __astree_not_a_number(); } return r;
}
# 639 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double cos(double x)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((r; [-1, 1])); } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float cosf(float x)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((r; [-1, 1])); } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double sin(double x)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((r; [-1, 1])); } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float sinf(float x)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((r; [-1, 1])); } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}
# 673 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double acosh(double x)
{
    __typeof__(x) r; if (x < 1) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = __astree_not_a_number(); } else if (x == x) { __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float acoshf(float x)
{
    __typeof__(x) r; if (x < 1) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = __astree_not_a_number(); } else if (x == x) { __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}
# 700 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double cosh(double x)
{
    __typeof__(x) r, val; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) { errno = 34; r = __astree_huge_valf(); } else { val = _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F); __ASTREE_modify((r; [1, val])); } } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float coshf(float x)
{
    __typeof__(x) r, val; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) { errno = 34; r = __astree_huge_valf(); } else { val = _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F); __ASTREE_modify((r; [1, val])); } } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}
# 727 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double tan(double x)
{
    __typeof__(x) r, val; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) { errno = 34; r = zero_or_one ? -__astree_huge_valf() : __astree_huge_valf(); } else { val = _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F); __ASTREE_modify((r; [-val, val])); } } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float tanf(float x)
{
    __typeof__(x) r, val; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) { errno = 34; r = zero_or_one ? -__astree_huge_valf() : __astree_huge_valf(); } else { val = _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F); __ASTREE_modify((r; [-val, val])); } } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}
# 757 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double exp(double x)
{
    __typeof__(x) r; if (x < 0) { if (zero_or_one) errno = 34; __ASTREE_modify((r; [0, 0 + 1])); } else if (x == 0) { r = 0 + 1; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= 0 + 1)); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float expf(float x)
{
    __typeof__(x) r; if (x < 0) { if (zero_or_one) errno = 34; __ASTREE_modify((r; [0, 0 + 1])); } else if (x == 0) { r = 0 + 1; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= 0 + 1)); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double exp2(double x)
{
    __typeof__(x) r; if (x < 0) { if (zero_or_one) errno = 34; __ASTREE_modify((r; [0, 0 + 1])); } else if (x == 0) { r = 0 + 1; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= 0 + 1)); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float exp2f(float x)
{
    __typeof__(x) r; if (x < 0) { if (zero_or_one) errno = 34; __ASTREE_modify((r; [0, 0 + 1])); } else if (x == 0) { r = 0 + 1; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= 0 + 1)); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double expm1(double x)
{
    __typeof__(x) r; if (x < 0) { if (zero_or_one) errno = 34; __ASTREE_modify((r; [-1, -1 + 1])); } else if (x == 0) { r = -1 + 1; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= -1 + 1)); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float expm1f(float x)
{
    __typeof__(x) r; if (x < 0) { if (zero_or_one) errno = 34; __ASTREE_modify((r; [-1, -1 + 1])); } else if (x == 0) { r = -1 + 1; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((r >= -1 + 1)); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}
# 812 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double frexp(double value, int *exp)
{
    __typeof__(value) r; if (!(-_Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= value && value <= _Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((*exp)); r = value; } else if (value == 0) { *exp = 0; r = value; } else { __ASTREE_modify((r; full_range)); __ASTREE_known_fact((0.5F <= r && r < 1.F)); if (value < 0) { value = -value; r = -r; } if (value < _Generic(value, double: 0x1p-1022, float: 0x1p-126F)) { int min_exp = _Generic(value, double: (-1021), float: (-125)); int mant_dig = _Generic(value, double: 53, float: 24); __ASTREE_modify((*exp; [min_exp - mant_dig + 1, min_exp - 1])); } else { *exp = __astree_double_extract_exponent(value) + 1; } } return r;
}

__attribute__((weak)) float frexpf(float value, int *exp)
{
    __typeof__(value) r; if (!(-_Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= value && value <= _Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((*exp)); r = value; } else if (value == 0) { *exp = 0; r = value; } else { __ASTREE_modify((r; full_range)); __ASTREE_known_fact((0.5F <= r && r < 1.F)); if (value < 0) { value = -value; r = -r; } if (value < _Generic(value, double: 0x1p-1022, float: 0x1p-126F)) { int min_exp = _Generic(value, double: (-1021), float: (-125)); int mant_dig = _Generic(value, double: 53, float: 24); __ASTREE_modify((*exp; [min_exp - mant_dig + 1, min_exp - 1])); } else { *exp = __astree_double_extract_exponent(value) + 1; } } return r;
}
# 837 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) int ilogb(double x)
{
    int r; if (x == 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = (-0x7FFFFFFF - 1); } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { return (int)logb(x); } else if (x == x) { r = 0x7FFFFFFF; } else { r = (-0x7FFFFFFF - 1); } return r;
}

__attribute__((weak)) int ilogbf(float x)
{
    int r; if (x == 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = (-0x7FFFFFFF - 1); } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { return (int)logbf(x); } else if (x == x) { r = 0x7FFFFFFF; } else { r = (-0x7FFFFFFF - 1); } return r;
}
# 862 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double ldexp(double x, int exp)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) errno = 34; if ((-1021) <= exp && exp <= 1024) { r = x * __astree_double_exp_2(exp); } else { __ASTREE_modify((r; full_range)); } } else { r = x; } return r;
}

__attribute__((weak)) float ldexpf(float x, int exp)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) errno = 34; if ((-1021) <= exp && exp <= 1024) { r = x * __astree_double_exp_2(exp); } else { __ASTREE_modify((r; full_range)); } } else { r = x; } return r;
}
# 892 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double log(double x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < 0 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < 0 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == 0 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float logf(float x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < 0 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < 0 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == 0 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double log10(double x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < 0 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < 0 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == 0 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float log10f(float x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < 0 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < 0 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == 0 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double log1p(double x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= -1) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < -1 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < -1 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == -1 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float log1pf(float x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= -1) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < -1 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < -1 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == -1 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) double log2(double x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < 0 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < 0 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == 0 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float log2f(float x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (zero_or_one) errno = 34; if (x <= 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = x < 0 ? __astree_not_a_number() : -__astree_huge_valf(); } else if (x < 0 + 1) { __ASTREE_known_fact((r <= 0)); } else if (x == 0 + 1) { r = 0; } else if (x == x) { __ASTREE_known_fact((r >= 0)); } else { r = __astree_not_a_number(); } return r;
}
# 953 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double logb(double x)
{
    __typeof__(x) r; if (x < 0) x = -x; if (x == 0) { r = -__astree_huge_valf(); } else if (x < 1) { int val = _Generic(x, double: (-1021), float: (-125)) - _Generic(x, double: 53, float: 24); __ASTREE_modify((r; [val, 0])); } else if (x == 1) { r = 0; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { int val = _Generic(x, double: 1024, float: 128); __ASTREE_modify((r; [0, val])); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float logbf(float x)
{
    __typeof__(x) r; if (x < 0) x = -x; if (x == 0) { r = -__astree_huge_valf(); } else if (x < 1) { int val = _Generic(x, double: (-1021), float: (-125)) - _Generic(x, double: 53, float: 24); __ASTREE_modify((r; [val, 0])); } else if (x == 1) { r = 0; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { int val = _Generic(x, double: 1024, float: 128); __ASTREE_modify((r; [0, val])); } else if (x == x) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}
# 988 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double modf(double value, double *iptr)
{
    __typeof__(value) i, r; __ASTREE_modify((i, r; full_range)); if (value < -_Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { i = -__astree_huge_valf(); r = 0; } else if (value < 0) { __ASTREE_known_fact((value <= i && i <= 0)); __ASTREE_known_fact((-1 < r && r <= 0)); } else if (value == 0) { i = 0; r = 0; } else if (value <= _Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { __ASTREE_known_fact((0 <= i && i <= value)); __ASTREE_known_fact((0 <= r && r < 1)); } else if (value == value) { i = __astree_huge_valf(); r = 0; } else { i = __astree_not_a_number(); r = __astree_not_a_number(); } *iptr = i; return r;
}

__attribute__((weak)) float modff(float value, float *iptr)
{
    __typeof__(value) i, r; __ASTREE_modify((i, r; full_range)); if (value < -_Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { i = -__astree_huge_valf(); r = 0; } else if (value < 0) { __ASTREE_known_fact((value <= i && i <= 0)); __ASTREE_known_fact((-1 < r && r <= 0)); } else if (value == 0) { i = 0; r = 0; } else if (value <= _Generic(value, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { __ASTREE_known_fact((0 <= i && i <= value)); __ASTREE_known_fact((0 <= r && r < 1)); } else if (value == value) { i = __astree_huge_valf(); r = 0; } else { i = __astree_not_a_number(); r = __astree_not_a_number(); } *iptr = i; return r;
}
# 1022 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double cbrt(double x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (x < -_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { r = x; } else if (x < -1) { __ASTREE_known_fact((x <= r && r <= -1)); } else if (x == -1) { r = x; } else if (x < 0) { __ASTREE_known_fact((-1 <= r && r <= x)); } else if (x == 0) { r = x; } else if (x < 1) { __ASTREE_known_fact((x <= r && r <= 1)); } else if (x == 1) { r = x; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { __ASTREE_known_fact((1 <= r && r <= x)); } else { r = x; } return r;
}

__attribute__((weak)) float cbrtf(float x)
{
    __typeof__(x) r; __ASTREE_modify((r; full_range)); if (x < -_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { r = x; } else if (x < -1) { __ASTREE_known_fact((x <= r && r <= -1)); } else if (x == -1) { r = x; } else if (x < 0) { __ASTREE_known_fact((-1 <= r && r <= x)); } else if (x == 0) { r = x; } else if (x < 1) { __ASTREE_known_fact((x <= r && r <= 1)); } else if (x == 1) { r = x; } else if (x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { __ASTREE_known_fact((1 <= r && r <= x)); } else { r = x; } return r;
}
# 1045 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double fabs(double x)
{
    __typeof__(x) r; if (x < 0) { r = -x ; } else if (x == 0) { r = 0; } else if (x == x) { r = x; } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float fabsf(float x)
{
    __typeof__(x) r; if (x < 0) { r = -x ; } else if (x == 0) { r = 0; } else if (x == x) { r = x; } else { r = __astree_not_a_number(); } return r;
}
# 1083 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double hypot(double x, double y)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && (-_Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= y && y <= _Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { /* With |x| >= |y| calculate |x| * sqrt(1 + (y / x)^^2) */ if (x < 0) x = -x; if (y < 0) y = -y; if (x < y) { __typeof__(x) t = x; x = y; y = t; } if (x == 0) { r = 0; } else { r = y / x; r = x * __astree_double_sqrt(1 + r * r); if (r < _Generic(x, double: 0x1p-1022, float: 0x1p-126F) || _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) < r) errno = 34; } } else if (x == x || y == y) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float hypotf(float x, float y)
{
    __typeof__(x) r; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && (-_Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= y && y <= _Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { /* With |x| >= |y| calculate |x| * sqrt(1 + (y / x)^^2) */ if (x < 0) x = -x; if (y < 0) y = -y; if (x < y) { __typeof__(x) t = x; x = y; y = t; } if (x == 0) { r = 0; } else { r = y / x; r = x * __astree_double_sqrt(1 + r * r); if (r < _Generic(x, double: 0x1p-1022, float: 0x1p-126F) || _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) < r) errno = 34; } } else if (x == x || y == y) { r = __astree_huge_valf(); } else { r = __astree_not_a_number(); } return r;
}
# 1159 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double pow(double x, double y)
{
    __typeof__(x) r; if (x == 1 || y == 0) { r = 1; } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && (-_Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= y && y <= _Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); if (x < 0) { if (((__typeof__(y))(-0x7FFFFFFF - 1) < (y) && (y) < (__typeof__(y))0x7FFFFFFF)) { if ((int)y != y) { errno = 33; r = __astree_not_a_number(); } else if ((int)y % 2 == 0) { __ASTREE_known_fact((r >= 0)); } else { __ASTREE_known_fact((r <= 0)); } } else if (zero_or_one) { errno = 33; r = __astree_not_a_number(); } } else if (x == 0) { if (y < 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 34; r = zero_or_one ? -__astree_huge_valf() : __astree_huge_valf(); } else { r = zero_or_one ? x : 0; } } else if (x < 1) { if (y < 0) { __ASTREE_known_fact((1 <= r)); } else if (y <= 1) { __ASTREE_known_fact((x <= r && r <= 1)); } else { __ASTREE_known_fact((0 <= r && r <= x)); } } else if (x == 1) { r = 1; } else { if (y < 0) { __ASTREE_known_fact((0 <= r && r <= 1)); } else if (y <= 1) { __ASTREE_known_fact((1 <= r && r <= x)); } else { __ASTREE_known_fact((x <= r)); } } } else if (x == x && y == y) { if (x < -_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { r = y < 0 ? 0 : __astree_huge_valf(); if (((__typeof__(y))(-0x7FFFFFFF - 1) < (y) && (y) < (__typeof__(y))0x7FFFFFFF) ? (int)y == y && (int)y % 2 != 0 : zero_or_one) r = -r; } else if (x == -1) { r = 1.; } else if (-1 < x && x < 1) { r = y < 0 ? __astree_huge_valf() : 0; } else { r = y < 0 ? 0 : __astree_huge_valf(); } } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float powf(float x, float y)
{
    __typeof__(x) r; if (x == 1 || y == 0) { r = 1; } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && (-_Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= y && y <= _Generic(y, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { if (zero_or_one) errno = 34; __ASTREE_modify((r; full_range)); if (x < 0) { if (((__typeof__(y))(-0x7FFFFFFF - 1) < (y) && (y) < (__typeof__(y))0x7FFFFFFF)) { if ((int)y != y) { errno = 33; r = __astree_not_a_number(); } else if ((int)y % 2 == 0) { __ASTREE_known_fact((r >= 0)); } else { __ASTREE_known_fact((r <= 0)); } } else if (zero_or_one) { errno = 33; r = __astree_not_a_number(); } } else if (x == 0) { if (y < 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 34; r = zero_or_one ? -__astree_huge_valf() : __astree_huge_valf(); } else { r = zero_or_one ? x : 0; } } else if (x < 1) { if (y < 0) { __ASTREE_known_fact((1 <= r)); } else if (y <= 1) { __ASTREE_known_fact((x <= r && r <= 1)); } else { __ASTREE_known_fact((0 <= r && r <= x)); } } else if (x == 1) { r = 1; } else { if (y < 0) { __ASTREE_known_fact((0 <= r && r <= 1)); } else if (y <= 1) { __ASTREE_known_fact((1 <= r && r <= x)); } else { __ASTREE_known_fact((x <= r)); } } } else if (x == x && y == y) { if (x < -_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) { r = y < 0 ? 0 : __astree_huge_valf(); if (((__typeof__(y))(-0x7FFFFFFF - 1) < (y) && (y) < (__typeof__(y))0x7FFFFFFF) ? (int)y == y && (int)y % 2 != 0 : zero_or_one) r = -r; } else if (x == -1) { r = 1.; } else if (-1 < x && x < 1) { r = y < 0 ? __astree_huge_valf() : 0; } else { r = y < 0 ? 0 : __astree_huge_valf(); } } else { r = __astree_not_a_number(); } return r;
}
# 1176 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double sqrt(double x)
{
    if (x < 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; } return __astree_double_sqrt(x);
}

__attribute__((weak)) float sqrtf(float x)
{
    if (x < 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; } return __astree_double_sqrt(x);
}
# 1201 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double erf(double x)
{
    __typeof__(x) r; if (x < 0) { __ASTREE_modify((r; [-1, 0])); } else if (x == 0) { r = x; } else if (x == x) { __ASTREE_modify((r; [0, 1])); } else { r = __astree_not_a_number(); } if (0) r = 1 - r; return r;
}

__attribute__((weak)) float erff(float x)
{
    __typeof__(x) r; if (x < 0) { __ASTREE_modify((r; [-1, 0])); } else if (x == 0) { r = x; } else if (x == x) { __ASTREE_modify((r; [0, 1])); } else { r = __astree_not_a_number(); } if (0) r = 1 - r; return r;
}

__attribute__((weak)) double erfc(double x)
{
    __typeof__(x) r; if (x < 0) { __ASTREE_modify((r; [-1, 0])); } else if (x == 0) { r = x; } else if (x == x) { __ASTREE_modify((r; [0, 1])); } else { r = __astree_not_a_number(); } if (1) r = 1 - r; return r;
}

__attribute__((weak)) float erfcf(float x)
{
    __typeof__(x) r; if (x < 0) { __ASTREE_modify((r; [-1, 0])); } else if (x == 0) { r = x; } else if (x == x) { __ASTREE_modify((r; [0, 1])); } else { r = __astree_not_a_number(); } if (1) r = 1 - r; return r;
}
# 1231 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double ceil(double x)
{
    __typeof__(x) r, d; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((d; [0, 1])); r = x + d; } else { r = x; } return r;
}

__attribute__((weak)) float ceilf(float x)
{
    __typeof__(x) r, d; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((d; [0, 1])); r = x + d; } else { r = x; } return r;
}

__attribute__((weak)) double floor(double x)
{
    __typeof__(x) r, d; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((d; [-1, 0])); r = x + d; } else { r = x; } return r;
}

__attribute__((weak)) float floorf(float x)
{
    __typeof__(x) r, d; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((d; [-1, 0])); r = x + d; } else { r = x; } return r;
}

__attribute__((weak)) double rint(double x)
{
    __typeof__(x) r, d; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((d; [-1, 1])); r = x + d; } else { r = x; } return r;
}

__attribute__((weak)) float rintf(float x)
{
    __typeof__(x) r, d; if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))) { __ASTREE_modify((d; [-1, 1])); r = x + d; } else { r = x; } return r;
}
# 1285 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double fmod(double x, double y)
{
    __typeof__(x) r; if (y == 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = __astree_not_a_number(); } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && y == y) { if (x == 0) { r = x; } else { if (y < 0) y = -y; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((0 <= r && r < y)); if (x < 0) r = -r; } } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float fmodf(float x, float y)
{
    __typeof__(x) r; if (y == 0) { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = __astree_not_a_number(); } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && y == y) { if (x == 0) { r = x; } else { if (y < 0) y = -y; __ASTREE_modify((r; full_range)); __ASTREE_known_fact((0 <= r && r < y)); if (x < 0) r = -r; } } else { if (x == x) errno = 33; r = __astree_not_a_number(); } return r;
}
# 1310 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double remainder(double x, double y)
{
    __typeof__(x) r; if (x != x || y != y) { r = __astree_not_a_number(); } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && y != 0) { if (y < 0) y = -y; __ASTREE_modify((r; [-(y / 2), y / 2])); } else { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float remainderf(float x, float y)
{
    __typeof__(x) r; if (x != x || y != y) { r = __astree_not_a_number(); } else if ((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F)) && y != 0) { if (y < 0) y = -y; __ASTREE_modify((r; [-(y / 2), y / 2])); } else { __ASTREE_alarm((raise_at_caller; check_stdlib_limits)); errno = 33; r = __astree_not_a_number(); } return r;
}
# 1349 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
__attribute__((weak)) double nextafter(double x, double y)
{
    __typeof__(x) r, bound, eps, min, max; if (x == x && y == y) { __ASTREE_modify((r; full_range)); eps = _Generic(x, double: 0x1p-52, float: 0x1p-23F); min = _Generic(x, double: 0x1p-1022, float: 0x1p-126F); max = _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F); if (x < y) { bound = x < -max ? -max : x < -min ? x * (1 - eps) : x < min ? x + min * eps : x * (1 + eps); __ASTREE_known_fact((x < r && r <= bound)); } else if (x == y) { r = y; } else { bound = x > max ? max : x > min ? x * (1 - eps) : x > -min ? x - min * eps : x * (1 + eps); __ASTREE_known_fact((bound <= r && r < x)); } } else { r = __astree_not_a_number(); } return r;
}

__attribute__((weak)) float nextafterf(float x, float y)
{
    __typeof__(x) r, bound, eps, min, max; if (x == x && y == y) { __ASTREE_modify((r; full_range)); eps = _Generic(x, double: 0x1p-52, float: 0x1p-23F); min = _Generic(x, double: 0x1p-1022, float: 0x1p-126F); max = _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F); if (x < y) { bound = x < -max ? -max : x < -min ? x * (1 - eps) : x < min ? x + min * eps : x * (1 + eps); __ASTREE_known_fact((x < r && r <= bound)); } else if (x == y) { r = y; } else { bound = x > max ? max : x > min ? x * (1 - eps) : x > -min ? x - min * eps : x * (1 + eps); __ASTREE_known_fact((bound <= r && r < x)); } } else { r = __astree_not_a_number(); } return r;
}



__attribute__((weak)) double fmax(double x, double y)
{
    return x > y || y != y ? x : y;
}

__attribute__((weak)) float fmaxf(float x, float y)
{
    return x > y || y != y ? x : y;
}

__attribute__((weak)) long double fmaxl(long double x, long double y)
{
    return x > y || y != y ? x : y;
}

__attribute__((weak)) double fmin(double x, double y)
{
    return x < y || y != y ? x : y;
}

__attribute__((weak)) float fminf(float x, float y)
{
    return x < y || y != y ? x : y;
}

__attribute__((weak)) long double fminl(long double x, long double y)
{
    return x < y || y != y ? x : y;
}


/*
 * setjmp.h
 */

__attribute__((weak)) int setjmp(jmp_buf env)
{
    __ASTREE_alarm((raise_at_caller; user_defined; "setjmp is not supported by Astree"));
    return 0;
}

__attribute__((weak)) void longjmp(jmp_buf env, int val)
{
    __ASTREE_alarm((raise_at_caller; user_defined; "longjmp is not supported by Astree"));
    __ASTREE_assert((0));
    __astree_exit(1);
}





/*
 * signal.h
 */

__attribute__((weak)) void astree_sig_dfl(int sig)
{
    __ASTREE_alarm((raise_at_caller; user_defined; "clib: signal handler astree_sig_dfl called for signal %0", sig));
}

__attribute__((weak)) void astree_sig_err(int sig)
{
    __ASTREE_alarm((raise_at_caller; user_defined; "clib: signal handler astree_sig_err called for signal %0", sig));
}


__attribute__((weak)) void astree_sig_ign(int sig)
{
    __ASTREE_alarm((raise_at_caller; user_defined; "clib: signal handler astree_sig_ign called for signal %0", sig));
}

__attribute__((weak)) void (*signal(int sig, void (*func)(int)))(int)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    static void (*funcs)(int) = (&astree_sig_err);

    __ASTREE_alarm((raise_at_caller; user_defined; "clib: signal called for signal %0", sig));

    if (zero_or_one)
      func(sig);

    if (zero_or_one)
      funcs = func;

    return funcs;
}

__attribute__((weak)) int raise(int sig)
{
    __ASTREE_alarm((raise_at_caller; user_defined; "clib: raise called for signal %0", sig));

    return m_inf_to_inf;
}

/*
 * stdlib.h
 */

/* malloc/calloc/realloc will return NULL if this limit is exceeded */


__attribute__((weak)) double atof(const char *nptr)
{
    double r;
    __ASTREE_initialize((r));
    if (!(nptr)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return r;
}

__attribute__((weak)) int atoi(const char *nptr)
{
    int r;
    __ASTREE_initialize((r));
    if (!(nptr)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return r;
}

__attribute__((weak)) long int atol(const char *nptr)
{
    long r;
    __ASTREE_initialize((r));
    if (!(nptr)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return r;
}

__attribute__((weak)) double strtod(const char * nptr, char ** endptr)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    double r;
    __ASTREE_initialize((r));
    size_t s, sz;
    __ASTREE_initialize((s));

    sz = strlen(nptr);
    __ASTREE_known_fact((s <= sz));

    if (endptr)
        *endptr = (char*)nptr + s;

    if (zero_or_one) {
        errno = 34;
        return __astree_huge_val();
    }

    return r; /* strtod can return a NaN */
}

__attribute__((weak)) float strtof(const char * nptr, char ** endptr)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    float r;
    __ASTREE_initialize((r));
    size_t s, sz;
    __ASTREE_initialize((s));

    sz = strlen(nptr);
    __ASTREE_known_fact((s <= sz));

    if (endptr)
        *endptr = (char*)nptr + s;

    if (zero_or_one)
        errno = 34;

    return r; /* strtof can return a NaN */
}

__attribute__((weak)) long int strtol(const char * nptr, char ** endptr, int base)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    long r;
    __ASTREE_initialize((r));
    size_t s, sz;
    __ASTREE_initialize((s));

    __ASTREE_assert((base == 0 || (base >= 2 && base <= 36)));

    sz = strlen(nptr);
    __ASTREE_known_fact((s <= sz));

    if (endptr)
        *endptr = (char*)nptr + s;

    if (zero_or_one)
        errno = 34;

    return r;
}

__attribute__((weak)) unsigned long int strtoul(const char * nptr, char ** endptr, int base)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    unsigned long r;
    __ASTREE_initialize((r));
    size_t s, sz;
    __ASTREE_initialize((s));

    __ASTREE_assert((base == 0 || (base >= 2 && base <= 36)));

    sz = strlen(nptr);
    __ASTREE_known_fact((s <= sz));

    if (endptr)
        *endptr = (char*)(nptr+s);

    if (zero_or_one)
        errno = 34;

    return r;
}

__attribute__((weak)) void* aligned_alloc(size_t alignment, size_t size)
{
    /* ignore alignment */
    return malloc(size);
}

__attribute__((weak)) void* calloc(size_t nmemb, size_t size)
{
    size_t s = nmemb * size;
    if (size > 0xffffffff) return ((void *)0);
    void* ptr = __astree_malloc(((void *)0), s, "malloc");
    __astree_bzero(ptr, s);

    if (zero_or_one) return ((void *)0);

    return ptr;
}

__attribute__((weak)) _Noreturn void abort(void)
{
    __astree_exit(1);
}

__attribute__((weak)) _Noreturn void exit(int status)
{
    __astree_exit(status);
}

__attribute__((weak)) _Noreturn void _Exit(int status)
{
    exit(status);
}

__attribute__((weak)) char* getenv(const char *name)
{
    static char buf[256];

    if (!(name)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    __ASTREE_modify((buf));
    buf[256 - 1] = 0;

    if (zero_or_one)
        return ((void *)0);
    else
        return buf;
}

__attribute__((weak)) _Noreturn void quick_exit(int status)
{
    exit(status);
}

__attribute__((weak)) int system(const char *string)
{
    int r;
    __ASTREE_initialize((r));
    __ASTREE_alarm((raise_here; stub_invocation; "clib: side-effects of system are ignored"));
    return r;
}

__attribute__((weak)) void* bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
    while (zero_or_one)
    {
        size_t a;
        __ASTREE_initialize((a));
        __ASTREE_known_fact((a < nmemb));

        compar(key, (char*)base + a * size);

        if (zero_or_one)
            return (char*)base + a * size;
    }

    return ((void *)0);
 }

__attribute__((weak)) void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
    while (zero_or_one)
    {
        size_t a, b;
        __ASTREE_initialize((a));
        __ASTREE_initialize((b));
        __ASTREE_known_fact((a < nmemb));
        __ASTREE_known_fact((b < nmemb));

        compar((char*)base + a * size, (char*)base + b * size);

        if (zero_or_one)
            memcpy((char*)base + a * size, (char*)base + b * size, size);

        if (zero_or_one)
            return;
    }
}

__attribute__((weak)) int abs(int j)
{
    return j < 0 ? -j : j;
}

__attribute__((weak)) long int labs(long int j)
{
    return j < 0 ? -j : j;
}

__attribute__((weak)) long long int llabs(long long int j)
{
    return j < 0 ? -j : j;
}

__attribute__((weak)) div_t div(int numer, int denom)
{
    if (denom == 0) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    div_t r;
    __ASTREE_initialize((r));
    r.quot = numer / denom;
    r.rem = numer % denom;
    return r;
}

__attribute__((weak)) ldiv_t ldiv(long int numer, long int denom)
{
    if (denom == 0) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    ldiv_t r;
    __ASTREE_initialize((r));
    r.quot = numer / denom;
    r.rem = numer % denom;
    return r;
}

__attribute__((weak)) void* malloc(size_t size)
{
    if (size > 0xffffffff) return ((void *)0);
    void* ptr = __astree_malloc(((void *)0), size, "malloc");

    if (zero_or_one) return ((void *)0);

    return ptr;
}

__attribute__((weak)) void free(void* ptr)
{
    __astree_malloc(ptr, 0, "malloc");
}

__attribute__((weak)) void* realloc(void* ptr, size_t size)
{
    if (size > 0xffffffff) return ((void *)0);
    ptr = __astree_malloc(ptr, size, "malloc");

    if (zero_or_one) return ((void *)0);

    return ptr;
}

__attribute__((weak)) int rand(void)
{
    int res;
    __ASTREE_modify((res; [0, 0x7FFFFFFF]));
    return res;
}

__attribute__((weak)) void srand(unsigned int seed)
{
    (void)seed;
}

/*
 * stdarg.h
 */

/*
 * stdio.h
 */

static FILE __astree_stdin;
static FILE __astree_stdout;
static FILE __astree_stderr;

FILE* stdin = &__astree_stdin;
FILE* stdout = &__astree_stdout;
FILE* stderr = &__astree_stderr;

__attribute__((weak)) int remove(const char *filename)
{
    if (!(filename)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return m_one_to_zero;
}

__attribute__((weak)) int rename(const char *oldname, const char *newname)
{
    if (!(oldname)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(newname)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return m_one_to_zero;
}

static FILE __astree_tmpfile;

__attribute__((weak)) FILE* tmpfile(void)
{
    if (zero_or_one)
        return (FILE*)((void *)0);
    else {
        __ASTREE_modify((__astree_tmpfile));
        return &__astree_tmpfile;
    }
}

__attribute__((weak)) char* tmpnam(char* s)
{
    if (zero_or_one) {
        return ((void *)0);
    } else {
        static char __astree_tmpnam[20];
        char* buf = s ? s : __astree_tmpnam;
        __astree_bzero(buf, 20);
        __ASTREE_trash((buf, 20 - 1));
        return buf;
    }
}

__attribute__((weak)) int fclose(FILE* stream)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (zero_or_one)
        return (__astree_eof());
    else
        return 0;
}

__attribute__((weak)) int fflush(FILE* stream)
{
    if (zero_or_one)
        return (__astree_eof());
    else
        return 0;
}

__attribute__((weak)) FILE* fopen(const char* restrict filename, const char* restrict mode)
{
    if (!(filename)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(mode)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (zero_or_one)
        return (FILE*)((void *)0);
    else {
        __ASTREE_modify((__astree_tmpfile));
        return &__astree_tmpfile;
    }
}

__attribute__((weak)) FILE* freopen(const char* restrict filename, const char* restrict mode, FILE* stream)
{
    fclose(stream);
    return fopen(filename, mode);
}

__attribute__((weak)) void setbuf(FILE* restrict stream, char* restrict buf)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    setvbuf(stream, buf, 3, 256);
}

__attribute__((weak)) int setvbuf(FILE* restrict stream, char* restrict buf, int mode, size_t size)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (buf) {
        if (!(buf)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
        (({__ASTREE_assert((!!((size > 0))));}));
        __ASTREE_alarm((raise_here; stub_invocation; "side-effects of setvbuf are ignored"));
        __ASTREE_trash((buf, size));
    }

    return m_inf_to_inf;
}

__attribute__((weak)) int fprintf(FILE* restrict stream, const char* restrict format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of fprintf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int fscanf(FILE* restrict stream, const char* restrict format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of fscanf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int printf(const char* restrict format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of printf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int scanf(const char* restrict format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of scanf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int sprintf(char* restrict sm, const char* restrict format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of sprintf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int sscanf(const char* restrict sm, const char* restrict format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of sscanf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int snprintf(char* restrict s, size_t n, const char* restrict format, ...)
{
    if (n != 0) {
      if (!s) {
          __ASTREE_alarm((stop; invalid_pointer_dereference; "pointer to buffer must be non-null when buffer size is non-zero"));
      } else {
          __ASTREE_trash((s, n));
      }
    }
    __ASTREE_alarm((stub_invocation; "side-effects of snprintf are partially ignored"));

    return m_inf_to_inf;
}

__attribute__((weak)) int vfprintf(FILE* restrict stream, const char* restrict format, va_list arg)
{
    return fprintf(stream, format);
}

__attribute__((weak)) int vfscanf(FILE* restrict stream, const char* restrict format, va_list arg)
{
    return fscanf(stream, format);
}

__attribute__((weak)) int vprintf(const char* restrict format, va_list arg)
{
    return printf(format);
}

__attribute__((weak)) int vscanf(const char* restrict format, va_list arg)
{
    return scanf(format);
}

__attribute__((weak)) int vsnprintf(char* restrict s, size_t n, const char* restrict format, va_list arg)
{
    return snprintf(s, n, format);
}

__attribute__((weak)) int vsprintf(char* restrict s, const char* restrict format, va_list arg)
{
    unsigned u;
    __ASTREE_initialize((u));
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of vsprintf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int vsscanf(const char* restrict s, const char* restrict format, va_list arg)
{
    return sscanf(s, format);
}

__attribute__((weak)) int fgetc(FILE* stream)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (zero_or_one)
        return (__astree_eof());
    else
        return uchar_zero_to_inf;
}

__attribute__((weak)) char* fgets(char* restrict s, int n, FILE* restrict stream)
{
    (({__ASTREE_assert((!!(n >= 0)));}));
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (n <= 0) {
        *s = 0;
        return s;
    }

    char c;
    __ASTREE_initialize((c));
    __ASTREE_unroll((1024))
    for (int i = 0; i < n; i++) s[i] = c;

    s[n-1] = 0;
    if (zero_or_one)
        return (char*)((void *)0);
    else
        return s;
}

__attribute__((weak)) int fputc(int c, FILE* stream)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of fputc are ignored"));

    if (zero_or_one)
        return (__astree_eof());
    else
        return c;
}

__attribute__((weak)) int fputs(const char* restrict s, FILE* restrict stream)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of fputs are ignored"));

    return m_inf_to_inf;
}

__attribute__((weak)) int getc(FILE* stream)
{
    return fgetc(stream);
}

__attribute__((weak)) int getchar(void)
{
    return getc(stdin);
}

__attribute__((weak)) char* gets(char* s)
{
    if (!(s)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    /* An arbitrary number of chars might be written into the 
       buffer s. The modify directive below therefore raises an alarm. */
    unsigned zero_to_inf;
    __ASTREE_initialize((zero_to_inf));
    __ASTREE_trash((&s[zero_to_inf], sizeof(s[zero_to_inf])));

    if (zero_or_one)
        return (char*)((void *)0);
    else
        return s;
}

__attribute__((weak)) int putc(int c, FILE* stream)
{
    return fputc(c, stream);
}

__attribute__((weak)) int putchar(int c)
{
    return fputc(c, stdout);
}

__attribute__((weak)) int puts(const char* s)
{
    return fputs(s, stdout);
}

__attribute__((weak)) int ungetc(int c, FILE* stream)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of ungetc are ignored"));

    if (zero_or_one)
        return (__astree_eof());
    else
        return uchar_zero_to_inf;
}

__attribute__((weak)) size_t fread(void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream)
{
    if (!(ptr)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    size_t n;

    if (size == 0 || nmemb == 0)
        return 0;

    __ASTREE_initialize((n));
    __ASTREE_known_fact((n <= nmemb));
    __ASTREE_trash((ptr, size * nmemb));

    return n;
}

__attribute__((weak)) size_t fwrite(const void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream)
{
    if (!(ptr)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    size_t n;

    if (size == 0 || nmemb == 0)
        return 0;

    __ASTREE_initialize((n));
    __ASTREE_known_fact((n <= nmemb));
    __ASTREE_access((ptr, size * nmemb));

    return n;
}

__attribute__((weak)) int fgetpos(FILE* stream, fpos_t* pos)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    fpos_t p;
    __ASTREE_initialize((p));
    __ASTREE_known_fact((p >= 0));
    *pos = p;
    return m_inf_to_inf;
}

__attribute__((weak)) int fseek(FILE* stream, long int offset, int whence)
{
    (({__ASTREE_assert((!!(offset >= 0)));}));
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (zero_or_one)
        return (__astree_eof());
    else
        return 0;
}

__attribute__((weak)) int fsetpos(FILE* stream, const fpos_t* pos)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(pos)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return m_inf_to_inf;
}

__attribute__((weak)) long int ftell(FILE* stream)
{
    do { if (errno != 0) __ASTREE_alarm((raise_at_caller; check_errno_reset)); __ASTREE_modify((errno)); } while (0);
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return long_m_one_to_inf;
}

__attribute__((weak)) void rewind(FILE* stream)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
}

__attribute__((weak)) void clearerr(FILE* stream)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
}

__attribute__((weak)) int feof(FILE* stream)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return m_inf_to_inf;
}

__attribute__((weak)) int ferror(FILE* stream)
{
    if (!(stream)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    return m_inf_to_inf;
}

__attribute__((weak)) void perror(const char* s)
{
     if (!(s)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
}
# 2147 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/src/clib.c"
/*
 * string.h
 */

__attribute__((weak)) void* memcpy(void * restrict s1, const void * restrict s2, size_t n)
{
    __astree_memcpy(s1, s2, n);
    return s1;
}

__attribute__((weak)) void* memmove(void *s1, const void *s2, size_t n)
{
    return memcpy(s1, s2, n);
}

__attribute__((weak)) char* strcpy(char * restrict s1, const char * restrict s2)
{
    size_t n = strlen(s2);
    memcpy(s1, s2, n * sizeof(char));
    s1[n * sizeof(char)] = '\0';

    return s1;
}

__attribute__((weak)) char* strncpy(char * restrict s1, const char * restrict s2, size_t n)
{
    _Bool zero = 0;
    __ASTREE_unroll((1024))
    for (size_t i = 0; i < n; ++i) {
        char c = '\0';
        if (!zero) {
            c = s2[i];
            if (c == '\0')
                zero = 1;
        }
        s1[i] = c;
    }

    return s1;
}

__attribute__((weak)) char* strcat(char * restrict s1, const char * restrict s2)
{
    size_t m = strlen(s1);
    size_t n = strlen(s2);

    memcpy(s1 + m, s2, n);
    s1[m + n] = '\0';

    return s1;
}

__attribute__((weak)) char* strncat(char * restrict s1, const char * restrict s2, size_t n)
{
    size_t m = strlen(s1);
    size_t i;

    __ASTREE_unroll((1024))
    for (i = 0 ; i < n && s2[i] != '\0' ; i++);

    memcpy(s1 + m, s2, i);
    s1[m + i] = '\0';

    return s1;
}


__attribute__((weak)) int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    __ASTREE_unroll((1024))
    for (i = 0; i < n; i++) {
        char c1 = ((char*)s1)[i];
        char c2 = ((char*)s2)[i];

        if (c1 > c2)
            return one_to_inf;

        if (c1 < c2)
            return m_inf_to_m_one;
    }

    return 0;
}

__attribute__((weak)) int strcmp(const char *s1, const char *s2)
{
    if (s1 == s2)
        return 0;

    int i;
    __ASTREE_unroll((1024))
    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++);

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

__attribute__((weak)) int strcoll(const char *s1, const char *s2)
{
    if (!(s1)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(s2)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    int r;
    __ASTREE_initialize((r));
    return r;
}

__attribute__((weak)) int strncmp(const char *s1, const char *s2, size_t n)
{
    if (s1 == s2)
        return 0;

    int i;
    __ASTREE_unroll((1024))
    for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++);

    if (i == n)
        return 0;

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

__attribute__((weak)) size_t strxfrm(char * restrict s1, const char * restrict s2, size_t n)
{
    if (!(s2)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    size_t r;
    __ASTREE_initialize((r));

    if (n <= 0)
        return 0;

    __ASTREE_known_fact((r >= 0 && r < n));

    __ASTREE_trash((s1, n));
    s1[n-1] = 0;

    return r;
}

__attribute__((weak)) void* memchr(const void *s, int c, size_t n)
{
    size_t i;

    for (i = 0; i < n && ((char*)s)[i] != c; i++);

    if (i == n)
        return (void*)0;

    return (char*)s + i;
}

__attribute__((weak)) char* strchr(const char *s, int c)
{
    size_t i;

    __ASTREE_unroll((1024))
    for (i = 0; s[i] && s[i] != c; i++);

    if (s[i] ||!c)
        return (char*)s + i;

    else return ((void *)0);
}

__attribute__((weak)) size_t strcspn(const char *s1, const char *s2)
{
    if (!(s2)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    size_t l = strlen(s1);
    size_t a;
    __ASTREE_initialize((a));
    __ASTREE_known_fact((a <= l || a == 0));
    return a;
}

__attribute__((weak)) char* strrchr(const char *s, int c)
{
    char* last = ((void *)0);
    size_t i;
    size_t m = strlen(s);

    __ASTREE_unroll((1024))
    for (i = 0; i<=m; i++)
        if (s[i] == c)
            last = (char*)s + i;

    return last;
}

__attribute__((weak)) char* strpbrk(const char *s1, const char *s2)
{
  size_t i;
  size_t j;

  __ASTREE_unroll((100))
  for (i = 0; s1[i]; i++)
  {
    __ASTREE_unroll((10))
    for (j=0;s2[j]; j++)
      if (s1[i]==s2[j])
        return (char*)s1 +i;
  }
  return ((void *)0);
}

__attribute__((weak)) size_t strspn(const char *s1, const char *s2)
{
    if (!(s2)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    size_t l = strlen(s1);
    size_t a;
    __ASTREE_initialize((a));
    __ASTREE_known_fact((a <= l || a == 0));
    return a;
}

__attribute__((weak)) char* strstr(const char *s1, const char *s2)
{
    size_t l1 = strlen(s1);
    size_t l2 = strlen(s2);
    size_t a;
    __ASTREE_initialize((a));

    if (zero_or_one) {
        return ((void *)0);
    } else if (l1 >= l2) {
        __ASTREE_known_fact((a <= l1 - l2));
        return (char*)s1 + a;
    } else {
        return (char*) s1;
    }
}

__attribute__((weak)) char* strtok(char * restrict s1, const char * restrict s2)
{
    if (!(s2)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    static char* a = ((void *)0);
    char* rval = ((void *)0);

    size_t b = 0;
    __ASTREE_modify((b; full_range));

    /* string argument is not NULL */
    if (s1) {
        size_t l1 = strlen(s1);
        __ASTREE_known_fact((b <= l1));
        if (b > 0) { __ASTREE_trash((s1, b)); }
        a = s1;
        if (zero_or_one) { rval = (char*) s1 + b; };
        return rval;
    }

    /* string argument is NULL, subsequent call */
    if (a) {
        size_t l1 = strlen(a);
        __ASTREE_known_fact((b <= l1));
        if (b > 0) { __ASTREE_trash((a, b)); }
        if (zero_or_one) { rval = (char*) a + b; }
        return rval;
    }

    /* string argument is NULL in first call */
    return rval;
}

__attribute__((weak)) void* memset(void *s, int c, size_t n)
{
    char cc = (char)c;
    size_t i;

    if (c == 0)
    {
        __astree_bzero(s,n);
        return s;
    }

    for (i = 0; i < n; i++)
        ((char*)s)[i] = cc;

    return s;
}

static char strerror_result[32];

__attribute__((weak)) char* strerror(int errnum)
{
    __ASTREE_modify((strerror_result));
    return strerror_result;
}

__attribute__((weak)) size_t strlen(const char *s)
{
    size_t i;

    __ASTREE_unroll((1024))
    for (i = 0; s[i] != '\0'; i++);

    return i;
}

/*
 * time.h
 */

__attribute__((weak)) clock_t clock(void)
{
    clock_t r;
    __ASTREE_initialize((r));
    return r;
}

__attribute__((weak)) double difftime(time_t time1, time_t time0)
{
    return (double)time1 - (double)time0;
}

__attribute__((weak)) time_t mktime(struct tm *timeptr)
{
    time_t r;
    __ASTREE_initialize((r));
    __ASTREE_trash((timeptr, sizeof(*timeptr)));
    return r;
}

__attribute__((weak)) time_t time(time_t *timer)
{
    time_t r;
    __ASTREE_initialize((r));

    if (timer)
        *timer = r;

    return r;
}

__attribute__((weak)) int timespec_get(struct timespec *ts, int base)
{
    if(base != 1 /* C11 */)
    {
        __ASTREE_alarm((raise_here; stub_invocation; "unsupported base argument for timespec_get (only TIME_UTC is supported)"));
        return 1;
    }
    if(ts == ((void *)0))
    {
        __ASTREE_alarm((raise_at_caller; uninitialized_variable_use;
            "clib: ts is not initialized"));
        return 1;
    }
    if(zero_or_one)
    {
        __ASTREE_trash((&ts->tv_sec, sizeof(ts->tv_sec)));
        __ASTREE_trash((&ts->tv_nsec, sizeof(ts->tv_nsec)));
        return 0;
    }
    return 1;
}

static char __astree_asctime_buf[26];

__attribute__((weak)) char* asctime(const struct tm *timeptr)
{
    *timeptr;
    __ASTREE_modify((__astree_asctime_buf));
    __astree_asctime_buf[25] = 0;

    if (zero_or_one)
        return __astree_asctime_buf;
    else
        return ((void *)0);
}

__attribute__((weak)) char* ctime(const time_t *timer)
{
    struct tm *t = localtime(timer);
    return asctime(t);
}

static struct tm __astree_gmtime_buf;

__attribute__((weak)) struct tm* gmtime(const time_t *timer)
{
    __ASTREE_modify((__astree_gmtime_buf));
    if (!(timer)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (zero_or_one)
        return &__astree_gmtime_buf;
    else
        return ((void *)0);
}

static struct tm __astree_localtime_buf;

__attribute__((weak)) struct tm* localtime(const time_t *timer)
{
    __ASTREE_modify((__astree_localtime_buf));
    if (!(timer)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    if (zero_or_one)
        return &__astree_localtime_buf;
    else
        return ((void *)0);
}

__attribute__((weak)) size_t strftime(char *s, size_t maxsize, const char *format, const struct tm *timeptr)
{
    if (!(s)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));
    if (!(format)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    size_t r;
    __ASTREE_initialize((r));
    *timeptr;

    __ASTREE_trash((s, maxsize));
    s[maxsize-1] = 0;
    __ASTREE_known_fact((r >= 0 && r <= maxsize));

    return r;
}

/*
 * wchar.h
 */
__attribute__((weak)) int fwprintf(FILE *stream, const wchar_t *format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of fwprintf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int fwscanf(FILE *stream, const wchar_t *format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of fwscanf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int swprintf(wchar_t *s, size_t n, const wchar_t *format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of swprintf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int swscanf(const wchar_t *s, const wchar_t *format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of swscanf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int wprintf(const wchar_t *format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of wprintf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int wscanf(const wchar_t *format, ...)
{
    __ASTREE_alarm((raise_here; stub_invocation; "side-effects of wscanf are ignored"));
    return m_inf_to_inf;
}

__attribute__((weak)) int vfwprintf(FILE *stream, const wchar_t *format, va_list arg)
{
    return fwprintf(stream, format);
}

__attribute__((weak)) int vfwscanf(FILE *stream, const wchar_t *format, va_list arg)
{
    return fwscanf(stream, format);
}

__attribute__((weak)) int vswprintf(wchar_t *s, size_t n, const wchar_t *format, va_list arg)
{
    return swprintf(s, n, format);
}

__attribute__((weak)) int vswscanf(const wchar_t *s, const wchar_t *format, va_list arg)
{
    return swscanf(s, format);
}

__attribute__((weak)) int vwprintf(const wchar_t *format, va_list arg)
{
    return wprintf(format);
}

__attribute__((weak)) int vwscanf(const wchar_t *format, va_list arg)
{
    return wscanf(format);
}

/*
 * wctypes.h
 */

static wctrans_t wctrans_rp;

__attribute__((weak)) int iswalnum(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswalpha(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswblank(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswcntrl(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswdigit(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswgraph(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswlower(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswprint(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswpunct(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswspace(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswupper(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswxdigit(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) int iswctype(wint_t wc, wctype_t desc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) wctype_t wctype(const char *property)
{
    if (!(property)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) wint_t towlower(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) wint_t towupper(wint_t wc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) wint_t towctrans(wint_t wc, wctrans_t desc)
{
    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    return r;
}

__attribute__((weak)) wctrans_t wctrans(const char *property)
{
    if (!(property)) __ASTREE_alarm((raise_at_caller; invalid_pointer_dereference; "invalid dereference: argument pointer may be null or invalid"));

    int r = 0;
    __ASTREE_modify((r; [(-0x7FFFFFFF - 1), 0x7FFFFFFF]));
    *wctrans_rp = r;
    return wctrans_rp;
}

/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
