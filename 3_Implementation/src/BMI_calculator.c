/**
 * @file BMI_calculator.c
 * @author 260756 (you@domain.com)
 * @brief BMI Calculator which takes height in meter and weight in Kg and gives your BMI
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdlib.h"
#include<stdio.h>
#include "header.h"

error_t bmi_calculator(body_mass height_weight)
{  
    float height, weight, bmi;  
    printf("\nEnter height in meter\n");  
    scanf("%f", &height);  
  
    printf("Enter weight in kg\n");  
    scanf("%f", &weight);  
  
    bmi = weight / (height * height);
  
    printf("Your Body Mass Index(BMI) is %f\n", bmi);  
  
    if(bmi < 15)  
    {  
        printf("Your BMI category is: Starvation\n");  
    }  
    else if(bmi >= 15.1 && bmi <= 17.5)  
    {  
        printf("Your BMI category is: Anorexic\n");  
    }  
    else if(bmi >= 17.6 && bmi <= 18.5)  
    {  
        printf("Your BMI category is: Underweight\n");  
    }  
    else if(bmi >= 18.6 && bmi <= 24.9)  
    {  
        printf("Your BMI category is: Ideal\n");  
    }  
    else if(bmi >= 25 && bmi <= 25.9)  
    {  
        printf("Your BMI category is: Overweight\n");  
    }  
    else if(bmi >= 30 && bmi <= 30.9)  
    {  
        printf("Your BMI category is: Obese\n");  
    }  
    else if(bmi >= 40)  
    {  
        printf("Your BMI category is: Morbidly Obese\n");  
    }  
    else  
    {  
        printf("Wrong entry\n");  
        exit(0);
    }  
    printf("\n");
    return SUCCESS;  
} 