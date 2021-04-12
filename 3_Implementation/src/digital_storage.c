/**
 * @file digital_storage.c
 * @author 260756 (you@domain.com)
 * @brief Functions for all types of Data Storage unit conversion(bits,bytes,kilobytes,megabytes,gigabytes,terabytes)
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdlib.h"
#include<stdio.h>
#include "header.h"

void red () {
  printf("\033[1;31m");
}

void yellow(){
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}


error_t bytes_to_kilobytes(){
   

	int bytes;

	double kilobytes;
    red();
	printf("Enter number of bytes:");

	scanf("%d",&bytes);

	kilobytes=bytes/1024.00;
    yellow();
	printf("Kilobytes: %.2lf",kilobytes);

	return SUCCESS;
}
error_t bits_to_kilobytes(){
   

	int bites;

	double kilobytes;

	printf("Enter number of bites:");

	scanf("%d",&bites);

	kilobytes=bites/8000.00;

	printf("Kilobytes: %.2lf",kilobytes);

	return SUCCESS;
}

error_t kilobytes_to_bits(){
    printf("Enter Kilobytes to convert into Bits\n");
    long long int kilobytes;
    scanf("%lld",&kilobytes);
   
    long long int Bits = 0;
  
    // calculates Bits
    // 1 kilobytes(s) = 8192 bits
    Bits = kilobytes * 8192;
  
    printf("%lld\n",Bits);
    return SUCCESS;
}
  
// Function to calculates the bytes
error_t kilobytes_to_bytes(){
    printf("Enter Kilobytes to convert into Bytes\n");
    long long int kilobytes;
    scanf("%lld",&kilobytes);
   
    long long int Bytes = 0;
  
    // calculates Bits
    // 1 kilobytes(s) = 8192 bits
    Bytes = kilobytes * 1024;
  
    printf("%lld\n",Bytes);
    return SUCCESS;
}
// Function to calculates the bytes
error_t megabytes_to_kilobytes(){
    printf("Enter Kilobytes to convert into Bytes\n");
    long long int megabytes;
    scanf("%lld",&megabytes);
   
    long long int kilobytes = 0;
  
    // calculates Bits
    // 1 kilobytes(s) = 8192 bits
    kilobytes = megabytes * 1024;
  
    printf("%lld\n",kilobytes);
    return SUCCESS;
}

error_t megabytes_to_gigabytes(){
    printf("Enter Kilobytes to convert into Bytes\n");
    long long int megabytes;
    scanf("%lld",&megabytes);
   
    float gigabytes = 0;
  
    // calculates Bits
    // 1 kilobytes(s) = 8192 bits
    gigabytes = megabytes/1024;
  
    printf("%f\n",gigabytes);
    return SUCCESS;
}
error_t gigabytes_to_terabytes(){
    printf("Enter gigabytes to convert into terabytes\n");
    long long int gigabytes;
    scanf("%lld",&gigabytes);
   
    float terabytes = 0;
  
    // calculates Bits
    // 1 kilobytes(s) = 8192 bits
    terabytes = gigabytes/1024;
  
    printf("%f\n",terabytes);
    return SUCCESS;
}
error_t digital_storage_converter(){
    printf("\nType 1 to Convert bytes to kiloBytes\n");
    printf("Type 2 to Convert bits to kiloBytes\n");
    printf("Type 3 to Convert kilobytes to bits\n");
    printf("Type 4 to Convert kilobytes to bytes\n");
    printf("Type 5 to Convert megabytes to kilobytes\n");
    printf("Type 6 to Convert megabytes to gigabytes\n");
    printf("Type 7 to Convert gigabytes to terabytes\n");
    printf("Type q Exit\n");
int choice ;
    printf("\nEnter  your choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            bytes_to_kilobytes();
            break;

        case 2:
            bits_to_kilobytes();
            break;

        case 3:
            kilobytes_to_bits();
            break;

        case 4:
            kilobytes_to_bytes();
            break;

        case 5:
            megabytes_to_kilobytes();
            break;
        
        case 6:
            megabytes_to_gigabytes();
            break;

        case 7:
            gigabytes_to_terabytes();
            break;
        case 'Q':
        case 'q': 
            exit(0);
        
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! choice is not correct");
    }

    return SUCCESS;
}

