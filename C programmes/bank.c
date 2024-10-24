/*
// program to show if someone is eligible for a loan in a bank
author:vibert
reg no:CT101/G/22151/24
*/
#include <stdio.h>
int main(){
	int age;
	float salary;
	// prompt the user to enter the age
	printf("enter the age:");
	scanf("%d",&age);
	// prompt the user to enter the salary
	printf("enter the salary:");
	scanf("%f",&salary);
	
	if (age>21&&salary>21000){
		printf("congratulation you qualify for the loan");
	}
	else{
		printf("unfortunately we are not able to offer you loan at this time");
	}
	return 0;
	
}
