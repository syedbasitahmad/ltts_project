#include "header.h"
#include "unity.h"

static complex_t c1 = {0, 0};
static complex_t c2 = {0, 0};
static complex_t result = {0, 0};
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_zero(void)
{
    // Can ommi the below intialization as it is done at the declaration time
    c1.real = 0;
    c1.imaginary = 0;
    
    c2.real = 0;
    c2.imaginary = 0;
    
    TEST_ASSERT_EQUAL(SUCCESS, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);
}
void test_positive(void)
{
    c1.real = 25;
    c1.imaginary = 15;
    
    c2.real = 75;
    c2.imaginary = 95;
    
    TEST_ASSERT_EQUAL(SUCCESS, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(100, result.real);
    TEST_ASSERT_EQUAL(110, result.imaginary);
}

void test_negative(void)
{
    c1.real = -25;
    c1.imaginary = -15;
    
    c2.real = 75;
    c2.imaginary = 95;
    
    TEST_ASSERT_EQUAL(SUCCESS, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(50, result.real);
    TEST_ASSERT_EQUAL(80, result.imaginary);

    c1.real = -25;
    c1.imaginary = -15;
    
    c2.real = -75;
    c2.imaginary = -95;
    
    TEST_ASSERT_EQUAL(SUCCESS, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-100, result.real);
    TEST_ASSERT_EQUAL(-110, result.imaginary);

}
void test_sub(void){
    // test zero
    c1.real = 0;
    c1.imaginary = 0;
    
    c2.real = 0;
    c2.imaginary = 0;
    TEST_ASSERT_EQUAL(SUCCESS, complexSub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);

    // test positive
    c1.real = 25;
    c1.imaginary = 15;
    
    c2.real = 75;
    c2.imaginary = 95;

    TEST_ASSERT_EQUAL(SUCCESS, complexSub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-50, result.real);
    TEST_ASSERT_EQUAL(-80, result.imaginary);

    // test negative

    c1.real = -25;
    c1.imaginary = -15;
    
    c2.real = -75;
    c2.imaginary = -95;

    TEST_ASSERT_EQUAL(SUCCESS, complexSub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(50, result.real);
    TEST_ASSERT_EQUAL(80, result.imaginary);


}
void test_mul(void){
    // test zero
    c1.real = 0;
    c1.imaginary = 0;
    
    c2.real = 0;
    c2.imaginary = 0;
    TEST_ASSERT_EQUAL(SUCCESS, complexMul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);

    // test positive
    c1.real = 25;
    c1.imaginary = 15;
    
    c2.real = 75;
    c2.imaginary = 95;
    TEST_ASSERT_EQUAL(SUCCESS, complexMul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(450, result.real);
    TEST_ASSERT_EQUAL(3500, result.imaginary);

    // test negative
    c1.real = -25;
    c1.imaginary = -15;
    
    c2.real = -75;
    c2.imaginary = -95;
    TEST_ASSERT_EQUAL(SUCCESS, complexMul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(450, result.real);
    TEST_ASSERT_EQUAL(3500, result.imaginary);
}

void test_div(void){
    // test zero
    c1.real = 0;
    c1.imaginary = 0;
    
    c2.real = 0;
    c2.imaginary = 0;
    
    TEST_ASSERT_EQUAL(ERROR_DIV_BY_ZERO, complexDiv(&c1, &c2, &result));
    // test positive
    c1.real = 1;
    c1.imaginary = -3;
    c2.real = 1;
    c2.imaginary = 2;
    TEST_ASSERT_EQUAL(SUCCESS, complexDiv(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-1, result.real);
    TEST_ASSERT_EQUAL(-1, result.imaginary);
    // test negative
    c1.real = -5;
    c1.imaginary = -5;
    c2.real = -5;
    c2.imaginary = 5;
    TEST_ASSERT_EQUAL(SUCCESS, complexDiv(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(1, result.imaginary);
}
    calc1 test_c1={10.0,5.0}; //positive
    calc1 testc12={-10.0,-5.0}; //negative
    calc1 testc1={10.0,0.0}; //zero deno
    calc2 testc2={6,5}; // positive
    calc2 testc22={-6,-5}; // negative
    calc5  testc5={8}; //Positive
    calc5 testc51={-8}; //negative
    calc5  testc52={0}; //Zero

    void t_add(void);
    void t_sub(void);
    void t_mul(void);
    void t_div(void);
    void t_divByZero(void);
    void t_logneg(void);
    void t_logzero(void);
   // void t_Zfact(void);
    void t_fact(void);
    void t_pow(void);
    void t_mod(void);
    void t_sin(void);
    void t_cos(void);
    void t_tan(void);
    void t_cosec(void);
    void t_sec(void);
    void t_cot(void);
    void test_bitwise(void){    
    TEST_ASSERT_EQUAL(SUCCESS, bitwise_operations());
}

void test_complex_calc(void){    
    TEST_ASSERT_EQUAL(SUCCESS, complex_calculator_operations());
}
void test_temp(void){    
    TEST_ASSERT_EQUAL(SUCCESS, temperature());
}

void test_1_temp_con(void){    
    TEST_ASSERT_EQUAL(53.599998, temp_con(12));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_zero);
    RUN_TEST(test_positive);
    RUN_TEST(test_negative);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_bitwise);
    RUN_TEST(test_complex_calc);
    RUN_TEST(test_temp);
    RUN_TEST(test_1_temp_con);
    RUN_TEST(t_add);
    RUN_TEST(t_sub);
    RUN_TEST(t_mul);
    RUN_TEST(t_div);
    RUN_TEST(t_divByZero);
    RUN_TEST(t_logneg);
    RUN_TEST(t_logzero);
    // RUN_TEST(t_Zfact);
    RUN_TEST(t_fact);
   // RUN_TEST(t_mod);
    RUN_TEST(t_sin);
    RUN_TEST(t_cos);
    RUN_TEST(t_tan);
    RUN_TEST(t_cosec);
    RUN_TEST(t_sec);
    RUN_TEST(t_cot);
    /* Close the Unity Test Framework */
    return UNITY_END();
}
/* all test functions */ 
void t_add(void) {
  TEST_ASSERT_EQUAL(15.000000,add(&test_c1));
  // TEST_ASSERT_EQUAL(-15.00000,sum(&testc12)); 
   }
void t_sub(void) {
  TEST_ASSERT_EQUAL(5.000000,sub(&test_c1));
  TEST_ASSERT_EQUAL(-5,sub(&testc12)); /* negative number input case  */
}
void t_mul(void) {
  TEST_ASSERT_EQUAL(50.000000,mul(&test_c1));
  TEST_ASSERT_EQUAL(50.000000,mul(&testc12)); /* negative number input case  */
}
void t_div(void){
    TEST_ASSERT_EQUAL(2.000000,divi(&test_c1));
}
void t_divByZero(void){
    TEST_ASSERT_EQUAL(-1.000000,divi(&testc1));
}
void t_logneg(void)
{
  TEST_ASSERT_EQUAL(-1, log_10(&testc51));
}
void t_logzero(void)
{
  TEST_ASSERT_EQUAL(-1, log_10(&testc52));
}
// void t_zfact(void){
//  TEST_ASSERT_EQUAL(1,fact(&testc52));  
// }

void t_fact(void){
 TEST_ASSERT_EQUAL(40320,fact(&testc5));  
}
// void t_mod(void) {
//   TEST_ASSERT_EQUAL(1,modu(&testc2));
//   TEST_ASSERT_EQUAL(1,modu(&testc52)); 
// }
void t_sin(void) {
  TEST_ASSERT_EQUAL(0.14,sin_v(&testc5));
  TEST_ASSERT_EQUAL(-0.14,sin_v(&testc51)); 
}
void t_cos(void) {
  TEST_ASSERT_EQUAL(0.99,cos_v(&testc5));
  TEST_ASSERT_EQUAL(0.99,cos_v(&testc51)); 
}
void t_tan(void) {
  TEST_ASSERT_EQUAL(0.14,tan_v(&testc5));
   TEST_ASSERT_EQUAL(-0.14,tan_v(&testc51)); 
}
void t_cosec(void) {
  TEST_ASSERT_EQUAL(7.19,sin_inv(&testc5));
   TEST_ASSERT_EQUAL(-7.19,sin_inv(&testc51)); 
}
void t_sec(void) {
  TEST_ASSERT_EQUAL(1.01,cos_inv(&testc5));
  TEST_ASSERT_EQUAL(1.01,cos_inv(&testc51)); 
}
void t_cot(void) {
  TEST_ASSERT_EQUAL(7.12,tan_inv(&testc5));
   TEST_ASSERT_EQUAL(-7.12,tan_inv(&testc51)); 
}