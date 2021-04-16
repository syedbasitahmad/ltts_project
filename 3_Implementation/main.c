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
int basic_calc(void) {
	calc1 c1;
    calc2 c2;
    calc3 c3;
    calc4 c4;
    calc5 c5;
    int choice,result1;
    float result;

do {
printf("\nMathematical Operations (0 to exit):\n");
printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
printf("12. 10 ^ X\n13. X!\n14. Percent \n15. log10(x)\n16. Modulus\n");
printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
printf("21. Sec(X)\n22. Cot(X)\n");
printf("\nEnter the Choice: ");
scanf("%d", &choice);

if(choice == 0) exit(0);
switch(choice) {

case 1:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=add(&c1);
printf("\nResult: %f\n", result);
break;

case 2:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=sub(&c1);
printf("\nResult: %f\n", result);
break;

case 3:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=mul(&c1);
printf("\nResult: %f\n", result);
break;

case 4:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=divi(&c1);
printf("\nResult: %f\n", result);
break;

case 5:
printf("Enter X: ");
scanf("%f", &c5.i);
result=square_r(&c5);
printf("\nResult: %f\n", result);
break;

case 6:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=power(&c1);
printf("\nResult: %f\n", result);
break;

case 7:
printf("Enter X: ");
scanf("%f", &c3.e);
c3.f=2;
result=power_2(&c3);
printf("\nResult: %f\n", result);
break;

case 8:
printf("Enter X: ");
scanf("%f", &c3.e);
c3.f=3;
result=power_3(&c3);
printf("\nResult: %f\n", result);
break;

case 9:
printf("Enter X: ");
scanf("%f", &c3.e);
c3.f=-1;
result=power_neg(&c3);
printf("\nResult: %f\n", result);
break;

case 10:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=power_y(&c1);
printf("\nResult: %f\n", result);
break;

case 11:
printf("Enter X: ");
scanf("%f", &c1.a);
c1.b=3;
result=power_one_divideby_3(&c1);
printf("\nResult: %f\n", result);
break;

case 12:
c4.g=10;
printf("Enter X: ");
scanf("%f", &c4.h);
result=power_to_10(&c4);
printf("\nResult: %f\n", result);
break;

case 13:
printf("Enter X: ");
scanf("%f", &c5.i);
result=fact(&c5);
printf("\nResult: %.f\n", result);
break;

case 14:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=percent(&c1);
printf("\nResult: %.2f\n", result);
break;

case 15:
printf("Enter X: ");
scanf("%f", &c5.i);
result=log_10(&c5);
printf("\nResult: %.2f\n", result);
break;

case 16:
printf("Enter X: ");
scanf("%d", &c2.c);
printf("\nEnter Y: ");
scanf("%d", &c2.d);
result1=modu(&c2);
printf("\nResult: %d\n", result1);
break;

case 17:
printf("Enter X: ");
scanf("%f", &c5.i);
result=sin_v(&c5);
printf("\nResult: %.2f\n", result);
break;

case 18:
printf("Enter X: ");
scanf("%f", &c5.i);
result=cos_v(&c5);
printf("\nResult: %.2f\n", result);
break;

case 19:
printf("Enter X: ");
scanf("%f", &c5.i);
result=tan_v(&c5);
printf("\nResult: %.2f\n", result);
break;

case 20:
printf("Enter X: ");
scanf("%f", &c5.i);
result=sin_inv(&c5);
printf("\nResult: %.2f\n", result);
break;

case 21:
printf("Enter X: ");
scanf("%f", &c5.i);
result=cos_inv(&c5);
printf("\nResult: %.2f\n", result);
break;

case 22:
printf("Enter X: ");
scanf("%f", &c5.i);
result=tan_inv(&c5);
printf("\nResult: %.2f\n", result);
break;

default:
printf("\nInvalid Choice!\n");
}
} while(choice);
return 0;
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