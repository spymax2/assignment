/*
program to calculate the simple interest
author:spymax 
reg no:CT101/G/22151/24
date:24/09/2024
*/
//processor scanf(),printf()
#include <stdio.h>
#include <math.h>
int main(){
    float principle,rate,time,interest;
    //prompt the user to enter the principle
    printf("enter the principle");
    scanf("%f",&principle);
    //promp the user to enter the rate
    printf("enter the rate");
    scanf("%f",&rate);
    //prompt the user to enter the time
    printf("enter the time");
    scanf("%f",&time);
    
    //calculate the interest
    interest=principle*rate/100*time;
    printf("the interest is:%f",interest);
    return 0;

 }
 




