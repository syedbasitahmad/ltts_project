/**
 * @file unit.c
 * @author 260756 (basitahmad4@gmail.com)
 * @brief Function for area calculation and other major unit converters
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdlib.h"
#include<stdio.h>
#include "header.h"
error_t area_converter()
	{
        int width, length;
		printf("Enter the x-coordinates of top left corner:\n");
		scanf("%d x coordintes are:", &the_box.topleft.x); 
		

		printf("Enter the y-coordinates of top left corner:\n");
		scanf("%d y coordintes are:", &the_box.topleft.y); 

		printf("Enter the x-coordinates of bottom right corner:\n");
		scanf("%d x coordintes are:", &the_box.bottomright.x); 
		
		printf("Enter the y-coordinates of bottom right corner:\n");
		scanf("%d y coordintes are:", &the_box.bottomright.y); 
	
		width= the_box.bottomright.x - the_box.topleft.x;
		length= the_box.topleft.y - the_box.bottomright.y;
		area = width*length;
		printf(" The area is %ld", area);
		fflush(stdin);
		return SUCCESS;
	}


error_t unit_converter(){
    printf("Type 1 to Convert metre to area\n");// you have to provide all four coordinate points in order to find the area. 
    printf("Type 2 to \n");
    printf("Type 3 to \n");
    printf("Type 4 to \n");
    printf("Type 5 to \n");
    printf("Type 6 to Convert metre to area\n");
    printf("Type 7 to Convert metre to area\n");
    printf("Type 8 to Convert metre to area\n");
    int choice;
    scanf("%d",&choice);
       if(choice>10) return FAILURE;
    if(choice==1){
         area_converter();
         exit(0);
    }
    return SUCCESS;
}