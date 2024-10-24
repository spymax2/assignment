/*
AUTHOR:VIBERT
REG NO:CT101/G/22151/24
*/
# include <stdio.h>
int main(){
	int book_id;
	int due_date;
	int return_date;
	int over_due_date;
	int fine_rate;
	int fine_amount;
	
	// prompt the user to enter the book id
	printf("enter the book_id:");
	scanf("%d",&book_id);
	// prompt the user to enter the due date
	printf("enter the due_date:");
	scanf("%d",&due_date);
	// prompt the user to enter return date
	printf("enter the return_date:");
	scanf("%d",&return_date);
	// calculate the overdue date
	over_due_date=return_date-due_date;
	if(over_due_date<7){
		fine_rate=20;
		fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%d",fine_amount);
	}
	else if (over_due_date<=15){
		fine_rate=50;
		fine_amount=fine_rate*over_due_date;
		printf("the fine amount is:%d",fine_amount);
	}
	else {
		fine_rate=100;
		fine_amount=fine_rate*over_due_date;
		printf("the fine amount is:%d\n", fine_amount);
	}
	printf("the book_id is:%d\n",book_id);
	printf("the due_date is:%d\n",due_date);
	printf("the return_dateis:%d\n",return_date);
	printf("the over_due_dateis:%d\n",over_due_date);
	printf("the fine_rate is:%d\n",fine_rate);
	printf("the fine_amount is:%d\n",fine_amount);
	
	
	
	return 0 ;
}
