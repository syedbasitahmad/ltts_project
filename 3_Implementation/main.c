/**
 * @file main.c
 * @author  (basitahmad4@gmail.com)
 * @brief One Stop solution for mathematical operations:1.Basic Calculator 2.Bitwise Calculator 3.Complex Calculator 4.BMI calculator 5. Digital storage Converter 6.Temperature Converter 7. Unit Converter
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"
#include "header.h"
#define KEY "Enter the calculator Operation you want to do:"

void yellow_t(){
  printf("\033[1;33m");
}
error_t one_stop_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    yellow_t();
    printf("\t\t\t|------------------------------------------------|\n");
	printf("\t\t|                                                |\n");
	printf("\t\t|       -----------------------------            |\n");
	printf("\t\t|       WELCOME TO ONE STOP SOLUTION             |\n");
	printf("\t\t|       -----------------------------            |\n");
	printf("\t\t|                                                |\n");
	printf("\t\t|                                                |\n");
	printf("\t\t|                                                |\n");
	printf("\t\t|              Miniproject                       |\n");
	printf("\t\t|              SF ID:260756                      |\n");
	printf("\t\t|      CONTACT US:basithmad4@gmail.com           |\n");
	printf("\t\t|------------------------------------------------|\n\n\n");

 
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter 'a' symbol for Basic Calculator \n");
    printf("Enter 'b' symbol for Bitwise Calculator \n");
    printf("Enter 'c' symbol for BMI CALCULATOR \n");
    printf("Enter 'd' symbol for Complex Calculator \n");
    printf("Enter 'e' symbol for DIGITAL STORAGE CONVERTER \n");
    printf("Enter 'g' symbol for TEMPERATURE CONVERTER\n");
    printf("Enter 'g' symbol for UNIT CONVERTER \n");
    printf("Enter 'h' for MAIN MENU \n");
    printf("Enter 's' for SYSTEM CLS \n");
    printf("Enter 'q' to quit \n");
   // printf("Enter ! symbol for Factorial \n\n");
    return SUCCESS;
}

int main(){
    complex_t a = {1, 1}, b = {3, 1}, c = {0, 0};
    body_mass bmi_index= {0,0,0};
    int X=1;
    char one_stop_oprn;
 
    // Function call 
    one_stop_operations();
 
    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        scanf("%c",&one_stop_oprn);
 
        switch(one_stop_oprn)
        {
            case 'a': basic_calc();;
                      break;
 
            case 'b': bitwise_operations();
                      break;
 
            case 'c': bmi_calculator(bmi_index);
                      break;
 
            case 'd': complex_calc();
                      break;
 
            case 'e': digital_storage_converter();
                      break;
 
            case 'f': temperature();
                      break;
 
            case 'g': unit_converter();
                      break;
 
            case 'H':
            case 'h': one_stop_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 's':
            case 'S': system("cls");
                      one_stop_operations();
                      break;
 
            default : system("cls");
 
    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      one_stop_operations();
        }
    }

    //bmi_calculator(bmi_index);
   // area_converter();
   // unit_converter();
   // temperature();
    //digital_storage_converter();
    //bitwise_operations();
    //basic_calc();
  //  complex_calc();
  //  complex_sum(&a, &b, &c);
    //printf("%f %f\n\n", c.real, c.imaginary);
    
   // c.real = 0.0;
   // c.imaginary = 0.0;
   // complexSub(&a, &b, &c);
    //printf("%f %f\n\n", c.real, c.imaginary);
    
   // c.real = 0.0;
  //  c.imaginary = 0.0;
   // complexMul(&a, &b, &c);
    //printf("%f %f\n\n", c.real, c.imaginary);

    //c.real = 0.0;
    //c.imaginary = 0.0;
   // complexDiv(&a, &b, &c);
    //printf("%f %f\n\n", c.real, c.imaginary);
    return 0;
}