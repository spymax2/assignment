/*
// program to calculate codmpound interest
author:vibert
reg no:CT101/G/22151/24
*/
# include <stdio.h>
int main (){
	float principle,rate,time,n;
	
	// prompt the user  to enter the principle
	printf("enter the principle:");
	scanf("%f",&principle);
	// prompt the user to enter time
	printf("enter the time:");
	scanf("%f",&time);
	// prompt the user to enter the rate
	printf("enter the rate:");
	scanf("%f",&rate);
	// prompt the user to enter the value of n
	printf("enter the value of n:");
	scanf("%f",&n);
	
	// calculate the compound interest
	float compound_interest=principle*pow((1+(rate/(100*n))),n*time)-principle;
	printf("the compound_interest is:%.2f",compound_interest);
	
	return 0;
	
	
	
}
