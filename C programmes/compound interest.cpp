/*
program to calculate the compound interest
author:spymax 
reg no:CT101/G/22151/24
date:24/09/2024
*/
//processor scanf(),printf()
#include <stdio.h>
#include <math.h>
int main(){
    float principle,rate,time,N;
    //prompt the user to enter the principle
    printf("enter the principle:");
    scanf("%f",&principle);
    //prompt the user to enter the rate
    printf("enter the rate:");
    scanf("%f",&rate);
    //prompt the user to enter the time
    printf("enter the time:");
    scanf("%f",&time);
    //prompt the user to enter N
    printf("the value of N is:");
    scanf("%f",&N);
    //calculate the compound interest
    float compound_interest=principle*pow((1+(rate/(100*N))),N*time)-principle;
    printf("the total compound_interest is:%f",compound_interest);
    return 0;
    
		
	}