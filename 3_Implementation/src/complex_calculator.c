#include "stdlib.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "header.h"
#define KEY "Enter the calculator Operation you want to do:"

void complex_calculator_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    printf("\n             Welcome to Complex Calculator \n\n");
 
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter h for MAIN MENU \n");
    printf("Enter q to EXIT \n");

}

error_t complex_sum(complex_t const* cnum1, complex_t const* cnum2, complex_t* csum)
{   
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    csum->real = cnum1->real + cnum2->real;
    csum->imaginary = cnum1->imaginary + cnum2->imaginary;
    printf("%f   %f",csum->real,csum->imaginary);

    return SUCCESS;

}
error_t complexSub(complex_t const*  cnum1, complex_t const* cnum2, complex_t* cdiff){
    if( cnum1 == NULL|| cnum2 == NULL)
        return ERROR_NULL_PTR;
    
    cdiff->real = cnum1->real - cnum2->real;
    cdiff->imaginary = cnum1->imaginary - cnum2->imaginary;
    printf("%f   %f",cdiff->real,cdiff->imaginary);
    
    return SUCCESS;
}

error_t complexMul(complex_t const* cnum1, complex_t const* cnum2, complex_t* cmul){
    
    if( cnum1 == NULL|| cnum2 == NULL)
        return ERROR_NULL_PTR;
    
    cmul->real = (cnum1->real * cnum2->real) - (cnum1->imaginary * cnum2->imaginary);
    cmul->imaginary = (cnum1->real * cnum2->imaginary) + (cnum1->imaginary * cnum2->real);
    printf("%f   %f",cmul->real,cmul->imaginary);
    
    return SUCCESS;
}

error_t complexDiv(complex_t const* cnum1, complex_t const* cnum2, complex_t* cdiv){
    if( cnum1 == NULL|| cnum2 == NULL)
        return ERROR_NULL_PTR;
    
    float divv = cnum2->imaginary*cnum2->imaginary + cnum2->real * cnum2->real;
    
    if(divv == 0)
        return ERROR_DIV_BY_ZERO;
    
    cdiv->real = ((cnum1->real * cnum2->real) + (cnum1->imaginary * cnum2->imaginary))/divv;
    cdiv->imaginary = ((cnum1->imaginary * cnum2->real) - (cnum1->real * cnum2->imaginary))/divv;
    printf("%f   %f",cdiv->real,cdiv->imaginary);
    
    return SUCCESS;
}
error_t complex_calc()
{
    int X=1;
    char comp_calc_oprn;
 
    // Function call 
    float x,y,a,b;
    printf("\nEnter real and imaginary value of first number\n");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("Enter real and imaginary value of second number\n");
    scanf("%f",&a);
    scanf("%f",&b);
    complex_calculator_operations();
    complex_t cnum1;
    complex_t cnum2;
    complex_t cnum3;
    cnum1.real=x;
    cnum1.imaginary=y;
    cnum2.real=a;
    cnum2.imaginary=b;
    cnum3.real=0;
    cnum3.imaginary=0;
    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        scanf("%c",&comp_calc_oprn);
 
        switch(comp_calc_oprn)
        {
            case '+': complex_sum(&cnum1,&cnum2,&cnum3);
                      break;
 
            case '-': complexSub(&cnum1,&cnum2,&cnum3);
                      break;
 
            case '*': complexMul(&cnum1,&cnum2,&cnum3);
                      break;
 
            case '/': complexDiv(&cnum1,&cnum2,&cnum3);
                      break;
  
            case 'H':
            case 'h': complex_calculator_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      complex_calculator_operations();
                      break;
 
            default : system("cls");
 
    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      complex_calculator_operations();
        }
    }
}
 
