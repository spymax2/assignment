/*
//program to calculate and display electric bill fora customer
author:spymax
reg no:CT101/G/22151
*/
#include <stdio.h>
# include <string.h>
int main()
{
	int customer_id;
	char customer_name[10];
	float units;
	float charges;
	float bills;
	float surcharge_fee;
	float surcharge;
	float total_amount; 
	
	printf("enter the customer_id:");
	scanf("%d",&customer_id);
	printf("enter the units: ");
	scanf("%f",&units);
	printf("enter the customer_name:");
	scanf("%s",customer_name);
	
	if(units<200){ 
		charges=1.20;
		bills=charges*units;
		printf("\nthe bills is:%.2f",bills);
		
	}
	else if(units<400){
		charges=1.50;
		bills=charges*units;
		printf("\nthe bills is:%.2f",bills);

	}
	else if(units<600){
    charges=1.80;
    bills=charges*units;
    printf("\nthe bills is:%.2f",bills);
		
	}
	else{
		charges=2.00;
		bills=charges*units;
		printf("\nthe bills is:%.2f",bills);
	}
		
	
     float minimum_bill=100;
     if(bills<100){
		 printf("\nthe minimum_bill is= %.2f ",minimum_bill);
	 }
	 surcharge=15;
	 if (bills>400){
		surcharge_fee=bills*surcharge/100;
		printf("\nthe surcharge_fee is:%.2f",surcharge_fee);
		
	}
	total_amount=bills+surcharge_fee;
	printf("\nthe total_amount is:%.2f",total_amount);
	
	
	
	printf("\n the customer_id is:%d",customer_id);
	printf("\n the customer_name is:%s",customer_name);
	printf("\n the number of units is:%.2f",units);
	printf("\n the charges is :%.2f",charges);
	printf("\n the total_amount is:%.2f",total_amount);
	
		
	
	
	return 0;
}