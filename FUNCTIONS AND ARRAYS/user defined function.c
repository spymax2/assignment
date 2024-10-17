/*
program to calculate electric balance using user defined function
author:vibert ondieki
reg no:CT101/G/22151/24
*/
#include <stdio.h>
void getinput(int*id,char name[],float *units);
float calculatecharges(float units);
float calculatesurcharge(float bills);
float calculatetotals(float bills,float surcharge);
int main(){
 int customer_id;
 char customer_name[10];
 float units;
 float charges_per_unit;
 float bills;
 float surcharge;
 float totals;
 getinput(&customer_id,customer_name,&units);
 charges_per_unit=calculatecharges(units);
 bills=charges_per_unit*units;
 surcharge=calculatesurcharge(bills);
 if(bills<100){
    bills=100;
 }
 totals =calculatetotals(bills,surcharge);


 printf("the customer_id is:%d\n",customer_id);
 printf("the customer_name is:%s\n",customer_name);
 printf("the units is:%.2f\n",units);
 printf("the charges_per_unit are :%.2f\n",charges_per_unit);
 printf("the totals are:%.2f\n",totals);
 printf("the surcharge is:%.2f\n",surcharge);

return 0;
}
void getinput(int*customer_id,char customer_name[],float *units){
printf("enter the customer_id:");
scanf("%d",customer_id);
printf("enter the customer_name:");
scanf("%s",customer_name);
printf("enter the units:");
scanf("%f",units);
}


float calculatecharges(float units){
    if(units<=199){
        return 1.20;
    }
    else if(units<400){
        return 1.50;
    }
    else if(units<600){
        return 1.80;
    }
    else{
        return 2.00;
    }
}

float calculatesurcharge(float bills){
    if(bills>400){
        return bills*0.15;
    }
return 0;
}
float calculatetotals(float bills,float surcharge){
    return bills+surcharge;




}




