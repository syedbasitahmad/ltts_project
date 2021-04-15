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
int unit(){
   
    char fromUnit,toUnit;
    char *fUnit,*tUnit;
    long double fromValue,meterValue,toValue;
    int power =0;

    printf("To convert the 12 Inch to Foot\n");
    printf("enter the the unit in the format : dc12\n");

    printf("Ell: a\n");
    printf("Femi: b\n");
    printf("Foot: c\n");
    printf("Inch: d\n");
    printf("Light year: e\n");
    printf("Metre: f\n");
    printf("Mile: g\n");
    printf("Nano meter: h\n");
    printf("Pace: i\n");
    printf("Point: j\n");
    printf("Yard: k\n");
    printf("Mili meter: l\n");
    printf("Centi meter: m\n");
    printf("Deci meter: n\n");
    printf("Deca meter: o\n");
    printf("Hecto meter: p\n");
    printf("Kilo meter: q\n");

    scanf("%c%c%Lf",&fromUnit,&toUnit,&fromValue); 

    switch(fromUnit){
         case 'a': meterValue = fromValue * 1.143; fUnit="ell"; break;
         case 'b': meterValue = fromValue ; power = -15; fUnit="fm"; break;
         case 'c': meterValue = fromValue * 0.3048; fUnit="ft"; break;
         case 'd': meterValue = fromValue * 0.0254; fUnit="in"; break;
         case 'e': meterValue = fromValue * 9.4607304725808; power =15; fUnit="ly"; break;
         case 'f': meterValue = fromValue; fUnit="m"; break;
         case 'g': meterValue = fromValue * 1609.344; fUnit="mi"; break;
         case 'h': meterValue = fromValue; fUnit="nm"; power = -9; break;
         case 'i': meterValue = fromValue * 0.762 ; fUnit="pace"; break;
         case 'j': meterValue = fromValue * 0.000351450; fUnit="pt"; break;
         case 'k': meterValue = fromValue * 0.9144; fUnit="yd"; break;
         case 'l': meterValue = fromValue * 0.001; fUnit="mm"; break;
         case 'm': meterValue = fromValue * 0.01; fUnit="cm"; break;
         case 'n': meterValue = fromValue * 0.1; fUnit="deci meter"; break;
         case 'o': meterValue = fromValue * 10; fUnit="deca meter"; break;
         case 'p': meterValue = fromValue * 100; fUnit="hm"; break;
         case 'q': meterValue = fromValue * 1000; fUnit="km"; break;
         default:
             printf("Invalid input"); exit(0);
    }

    switch(toUnit){
         case 'a': toValue = meterValue/1.143; tUnit="ell"; break;
         case 'b': toValue = meterValue; tUnit="fm"; break;
         case 'c': toValue = meterValue/0.3048; tUnit="ft"; break;
         case 'd': toValue = meterValue/0.0254; tUnit="in"; break;
         case 'e': toValue = meterValue/9.4607304725808; tUnit="ly"; break;
         case 'f': toValue = meterValue; tUnit="m";break;
         case 'g': toValue = meterValue/1609.344; tUnit="mi"; break;
         case 'h': toValue = meterValue; tUnit="nm"; break;
         case 'i': toValue = meterValue/0.762; tUnit="pace"; break;
         case 'j': toValue = meterValue/0.000351450; tUnit="pt"; break;
         case 'k': toValue = meterValue/0.9144; tUnit="yd"; break;
         case 'l': toValue = meterValue/0.001; tUnit="mm"; break;
         case 'm': toValue = meterValue/0.01; tUnit="cm"; break;
         case 'n': toValue = meterValue/0.1; tUnit="deci meter"; break;
         case 'o': toValue = meterValue/10; tUnit="deca meter"; break;
         case 'p': toValue = meterValue/100; tUnit="hm"; break;
         case 'q': toValue = meterValue/1000; tUnit="km"; break;
         default:
             printf("Invalid input"); exit(0);
    }
   
    if(power==0)
         printf("%.4Lf %s = %.4Lf %s",fromValue,fUnit,toValue,tUnit);
    else{
         while(toValue > 10) 
         printf("%.4Lf %s = %.4Lf*10^%d %s",fromValue,fUnit,toValue,power,tUnit);
    }


    return 0;
}
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
    printf("Type 2 to Unit Conversions \n");
    int choice;
    scanf("%d",&choice);
       if(choice>10) return FAILURE;
    if(choice==1){
         area_converter();
         exit(0);
    }
    if(choice==2){
         unit();
         exit(0);
    }
    return SUCCESS;
}