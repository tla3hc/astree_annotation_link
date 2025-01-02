# 1 "C:/PUBLIC/conan/short/fea05f/1/Chassis_SCA/substituteFunction/stublibrary/stubs/math_stub.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/PUBLIC/conan/short/fea05f/1/Chassis_SCA/substituteFunction/stublibrary/stubs/math_stub.c" 2
static void float_valid (float x) { __ASTREE_check((x*0. == 0.)); }


/* Covered ok in Astree
remainder
mod
pow
exp
*/


float acosf_stub(float x)
{
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/acos
    float res;

    if (x < -1.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    if (x > 1.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x <= 1.f));
    __ASTREE_check((x >= -1.f));

    __ASTREE_initialize((res));
    float_valid(x);
    __ASTREE_known_fact((res <= 3.2f));
    __ASTREE_known_fact((res >= 0.f));

    return res;
}


float asinf_stub(float x)
{
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/asin
    float res;

    if (x < -1.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));
    if (x > 1.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x <= 1.f));
    __ASTREE_check((x >= -1.f));

    __ASTREE_initialize((res));
    float_valid(x);
    __ASTREE_known_fact((res <= 1.6f));
    __ASTREE_known_fact((res >= -1.6f));

    return res;
}

int abs_stub(int x)
{
    // Reference to C function definition: 
    // https://en.cppreference.com/w/c/numeric/math/abs
    int res;

    __ASTREE_initialize((res));
    float_valid(x);
    __ASTREE_known_fact((res <= x));
    __ASTREE_known_fact((res >= 0.f));

    return res;
}


float fabsf_stub(float x)
{
    // Reference to C function definition: 
    // https://en.cppreference.com/w/c/numeric/math/fabs
    float res;

    __ASTREE_initialize((res));
    float_valid(x);
    __ASTREE_known_fact((res <= x));
    __ASTREE_known_fact((res >= 0.f));

    return res;
}

float log10f_stub(float x)
{
    // https://en.cppreference.com/w/c/numeric/math/log10
    float r;

    if (x <= 0.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x > 0.f));
    __ASTREE_initialize((r));
    float_valid(x);
    __ASTREE_known_fact((r <= 39.f));
    __ASTREE_known_fact((r > -45.f));

    return r;
}


float logf_stub(float x)
{
    float r;

    if (x <= 0.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x > 0.f));
    __ASTREE_initialize((r));
    float_valid(x);
    __ASTREE_known_fact((r <= 90.f));
    __ASTREE_known_fact((r > -104.f));

    return r;
}

    // Reference to C function definition: 
    // https://en.cppreference.com/w/c/numeric/math/sin


float asinhf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/asinh
    float res;

    __ASTREE_check((x >= 1.f));

    __ASTREE_initialize((res));
    float_valid(x);
    __ASTREE_known_fact((res <= 91.f));
    __ASTREE_known_fact((res >= -91.f));

    return res;
}



float acoshf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/acosh
    float res;

    if (x < 1.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x >= 1.f));

    __ASTREE_initialize((res));
    float_valid(x);
    __ASTREE_known_fact((res <= 91.f));
    __ASTREE_known_fact((res >= 0.f));

    return res;
}


float sinf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/sin
    float res;
    __ASTREE_initialize((res));
    float_valid(x);

    if (x >= 3.1415f || x <= -3.1415f){
  __ASTREE_known_fact((res <= 1.f));
  __ASTREE_known_fact((res >= -1.f));
 }
 else {
  __ASTREE_partition_ranges((x; max_partition = 50));
  res = x-(x*x*x/6.f)+(x*x*x*x*x/120.f)-(x*x*x*x*x*x*x/5040.f)+(x*x*x*x*x*x*x*x*x/362880.f)-(x*x*x*x*x*x*x*x*x*x*x/39916800.f);
  __ASTREE_partition_merge_last(());
  if (res > 1.f) {res = 1.f;}
  if (res < -1.f) {res = -1.f;}
 }
    return res;
}


float cosf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/cos
    float res;
    __ASTREE_initialize((res));
    float_valid(x);

 if (x >= 3.1415 || x <= -3.1415){
  __ASTREE_known_fact((res <= 1.f));
  __ASTREE_known_fact((res >= -1.f));
 }
 else {
  __ASTREE_partition_ranges((x; max_partition = 100));
  res = 1-(x*x/2.f)+(x*x*x*x/24.f)-(x*x*x*x*x*x/720.f)+(x*x*x*x*x*x*x*x/40320.f)-(x*x*x*x*x*x*x*x*x*x/3628800.f);
  __ASTREE_partition_merge_last(());
  if (res > 1.f) {res = 1.f;}
  if (res < -1.f) {res = -1.f;}
 }
    return res;
}


float tanf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/tan
 float res;
 float cosine;
 __ASTREE_initialize((res));
 __ASTREE_initialize((cosine));
    float_valid(x);

 if ((x <= 1.570f && x >= -1.570f)){
  __ASTREE_partition_ranges((x; max_partition = 100));
  cosine = 1-(x*x/2.f)+(x*x*x*x/24.f)-(x*x*x*x*x*x/720.f);
  __ASTREE_known_fact((cosine >= 0.00079632f));
  __ASTREE_known_fact((cosine <= 1.f));
  res = (x-(x*x*x/6.f)+(x*x*x*x*x/120.f))/cosine;
  __ASTREE_partition_merge_last(());
 }
 else {
  __ASTREE_alarm((raise_at_caller; arithmetic_overflow; "Return value of tanf() may be +-inf."));
 }
    return res;
}


// EFTC-4155, Wildgruber Markus 2020-10-29
float atanf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/cpp/numeric/math/atan
 // Speedup atan(1250) in wolframalpha ~ 1.569996
 // Saying pi/2 ~ 1.5708 so we make sure we are inside the boundings
 float res;
 __ASTREE_initialize((res));
    float_valid(x);
 __ASTREE_partition_ranges((x; max_partition = 50));
 if (x >= 1250.f) {
  __ASTREE_known_range((res; [1.569996f,1.5708f]));
 }
 else if(x <= -1250.f) {
  __ASTREE_known_range((res; [-1.5708f,-1.569996f]));
 }
 else {
  if(x < 1.f && x > -1.f) {
   res = x-(x*x*x/3.f)+(x*x*x*x*x/5.f)-(x*x*x*x*x*x*x/7.f)+(x*x*x*x*x*x*x*x*x/9.f)-(x*x*x*x*x*x*x*x*x*x*x/11.f);
  }
  else {
   x = 1/x;
   res = x-(x*x*x/3.f)+(x*x*x*x*x/5.f)-(x*x*x*x*x*x*x/7.f)+(x*x*x*x*x*x*x*x*x/9.f)-(x*x*x*x*x*x*x*x*x*x*x/11.f);
   if (x > 0) {
    res = 1.570796326794897f - res;
   }
   else {
    res = - 1.570796326794897f - res;
   }
  }
 }
 __ASTREE_partition_merge_last(());

 __ASTREE_known_fact((res <= 1.5708f));
 __ASTREE_known_fact((res >= -1.5708f));

    return res;

}


float sqrtf_stub(float x){
    // Reference to C function definition: 
    // https://en.cppreference.com/w/c/numeric/math/sqrt
    float res;

    if(x < 0.f) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x >= 1.f));

    __ASTREE_initialize((res));
    float_valid(x);
 float sqrtf_of_x = sqrt(x);
    __ASTREE_known_fact((res <= sqrtf_of_x));
    __ASTREE_known_fact((res >= 0.f));

    return res;
}


double log10_stub(double x){
    double r;

    if (x <= 0.) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x > 0.));
    __ASTREE_initialize((r));
    float_valid(x);
    __ASTREE_known_fact((r <= 309.));
    __ASTREE_known_fact((r > -324.));

    return r;
}


double log_stub(double x){
    double r;

    if (x <= 0.) __ASTREE_alarm((raise_at_caller; check_stdlib_limits));

    __ASTREE_check((x > 0.));
    __ASTREE_initialize((r));
    float_valid(x);
    __ASTREE_known_fact((r <= 710.));
    __ASTREE_known_fact((r > -744.));

    return r;
}

int _isnanf_stub(double x){

    int res;

    __ASTREE_initialize((res));
    float_valid(x);
 __ASTREE_known_fact((res <= 1));
 __ASTREE_known_fact((res >= 0));

    return res;
}

float floorf_stub(float x){

 __typeof__(x) r, d;

    if (0.F <= x && x < 1.F){
  r = 0.F;
 }
 else if((-_Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F) <= x && x <= _Generic(x, double: 0x1.FFFFFFFFFFFFFp+1023, float: 0x1.FFFFFEp+127F))){
  __ASTREE_modify((d; [-1, 0]));
  r = x + d;
 }
 else{
  r = x;
 }
    return r;
}
