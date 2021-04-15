/**
 * @file temperature.c
 * @author 260756 (basitahmad4@gmail.com)
 * @brief Function to convert all temperature units i.e celsius to fahrenheit,celsius to kelvin,fahrenheit to celsius,fahrenheit to kelvin
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdlib.h"
#include<stdio.h>
#include "header.h"

float temp_con(float cel)
{
 float fahr = (1.8 * cel) + 32.0; //temperature conversion formula
 return fahr;
}

error_t temperature()
{

 float a,b,centigrade, fahrenheit,kelvin;
 int x;
 printf("1. For Fahrenheit To Celsius\n");
 printf("2. For Celsius To Fahrenheit\n");
 printf("3. For Celsius To Kelvin\n");
 printf("1. For Fahrenheit To Kelvin\n");
 printf("q. to EXIT\n");
 


 
 printf("\n\nEnter Your Choice\n");
 
 scanf("%d",&x);
 switch(x)
 {
 case 1:
  printf("\nEnter The Value of Fahrenheit Temperature: ");
  scanf("%f",&a);
  centigrade=5*(a-32)/9;
  printf("\n\nCelsius Temperature: %f ",centigrade);
  break;
 case 2:
  printf("\nEnter The Value of Celsius Temperature: ");
  scanf("%f",&b);
  fahrenheit=((9*b)/5)+32;
  printf("\n\nFahrenheit Temperature: %f ",fahrenheit);
  break;
 case 3:
  printf("\nEnter The Value of Celsius Temperature: ");
  scanf("%f",&b);
  kelvin= b + 273.15;
  printf("\n\nKelvin Temperature: %f ",kelvin);
  break;
  case 4:
  printf("\nEnter The Value of Fahrenheit Temperature: ");
  scanf("%f",&b);
  kelvin= (b - 32)*(5/9) + 273.15;
  printf("\n\nKelvin Temperature: %f ",kelvin);
  break;
 case 'Q':
 case 'q': 
  exit(0);
 default:
 printf("\n\nWrong Choice.....Try Again!!!\n");
 exit(0);
 
 }
 return SUCCESS;
}
