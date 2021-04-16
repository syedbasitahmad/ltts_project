/**
 * @file basic_calculator.c
 * @author 260756 (basitahmad4@gmail.com.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "header.h"
float add(calc1 *c1) {
    float res;
    res= c1->a + c1->b;
    return res;
}
float sub(calc1 *c1) {
    float res;
    res= c1->a - c1->b;
    return res;
}
float mul(calc1 *c1) {
    float res;
    res= c1->a * c1->b;
    return res;
}
float divi(calc1 *c1) {
    float res;
    if (c1->b==0){
	return -1;
}
else{
    res= c1->a / c1->b;
    return res;
}
}
float square_r(calc5 *c5){
	if(c5->i<0){
	return -1;
	}
	else{
        float res;
        res= sqrt(c5->i);
        return res;
}
}
float power(calc1 *c1){
    float res;
    res= pow(c1->a , c1->b);
    return res;
}
float power_2(calc3 *c3){
    float res;
    res= pow(c3->e , c3->f);
    return res;
}
float power_3(calc3 *c3){
    float res;
    res= pow(c3->e , c3->f);
    return res;
}
float power_neg(calc3 *c3){
    float res;
    res= pow(c3->e , c3->f);
    return res;
}
float power_to_10(calc4 *c4){
    float res;
    res= pow(c4->g , c4->h);
    return res;
}
float log_10(calc5 *c5){
    float res;
	if(c5->i<=0){
        return -1;
}
	else{
        res= log10(c5->i);
        return res;
}
}
int modu(calc2 *c2){
    int res;
    res= c2->c % c2->d;
    return res;
}
float sin_v(calc5 *c5){
    float res;
    res= sin(c5->i * 3.14159 / 180);
    return res;
}
float cos_v(calc5 *c5){
    float res;
    res=  cos(c5->i * 3.14159 / 180);
    return res;
}
float tan_v(calc5 *c5){
    float res;
    res=tan(c5->i * 3.14159 / 180);
    return res;
}
float sin_inv(calc5 *c5){
    float res;
    res= 1 / (sin(c5->i * 3.14159 / 180));
    return res;
}
float cos_inv(calc5 *c5){
    float res;
    res= 1 / (cos(c5->i * 3.14159 / 180));
    return res;
}
float tan_inv(calc5 *c5){
    float res;
    res= 1 / (tan(c5->i * 3.14159 / 180));
    return res;
}
float percent(calc1 *c1)
{
    float res;
    res= (c1->a*c1->b)/100;
    return res;
}
float fact(calc5 *c5){
	float res = 1;
	if(c5->i==0){
	return 1;
	}
	else if(c5->i<0){
	return -1;
	}
	else{
    int i;
    for(i = 1; i <= c5->i; i++) {
    res = res * i;
}
}
        return res;
}
float power_y(calc1 *c1){
    float res;
    res= pow(c1->a, (1/c1->b));
    return res;
}
float power_one_divideby_3(calc1 *c1){
    float res;
    res=pow(c1->a, (1/c1->b));
    return res;    
}