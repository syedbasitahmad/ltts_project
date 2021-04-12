/**
 * @file bitwise_calculator.c
 * @author 260756 (basitahmad4@gmail.com)
 * @brief Functions to perform Bitwise AND, Bitwise OR, Bitwise XOR , Bitwise NOT, Left shift and Right Shift on decimal integers
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdlib.h"
#include<stdio.h>
#include "header.h"

void red_color () {
  printf("\033[1;31m");
}

void yellow_color(){
  printf("\033[1;33m");
}

void reset_color () {
  printf("\033[0m");
}


// function for bitwise AND
    void bitwise_and(int a, int b)
    {
        yellow_color();
        printf( "a & b = %d\n",(a & b));
    }
    // function for bitwise OR
    void bitwise_or(int a, int b)
    {
         yellow_color();
        printf( "a | b = %d\n",(a | b));
    }
    // function for bitwise XOR
    void bitwise_xor(int a, int b)
    {
        yellow_color();
        printf( "a ^ b = %d\n",(a ^ b));
    }
    // function for bitwise NOT
    void bitwise_not(int a, int b)
    {
        yellow_color();
        printf( "~a = %d\n",(~a));
        printf( "~b = %d\n",(~b));
    }
    // function for bitwise Left Shift
    void bitwise_leftshift(int a, int b)
    {
         yellow_color();
        printf( "a << b = %d\n",(a << b));
    }
    // function for bitwise Right Shift
    void bitwise_rightshift(int a, int b)
    {
        yellow_color();
        printf( "a << b = %d\n",(a << b));
    }
/*
 * Main Function
 */
error_t bitwise_operations()
{
    int a, b, option;
    char choice;
    do {
        red_color();
        printf( "\nEnter the value of a and b:\n");
        scanf("%d%d",&a,&b);
        printf( "\nBITWISE OPERATION:\n");
        printf( "1.AND\n");
        printf( "2.OR\n");
        printf( "3.XOR\n");
        printf( "4.NOT\n");
        printf( "5.Left Shift\n");
        printf( "6.Right Shift\n");
        printf( "Select your option:\n");
        scanf("%d",&option);
        switch (option) {
        case 1:
            bitwise_and(a, b);
            break;
        case 2:
            bitwise_or(a, b);
            break;
        case 3:
            bitwise_xor(a, b);
            break;
        case 4:
            bitwise_not(a, b);
            break;
        case 5:
            bitwise_leftshift(a, b);
            break;
        case 6:
            bitwise_rightshift(a, b);
            break;
        defualt:
            printf( "Invalid option:\n");
            exit(0);
        }
        printf( "\nDo you want to continue?(y/n)");
        scanf("%c",&choice);
    } while (choice == 'Y' || choice == 'y');
    return SUCCESS;
}