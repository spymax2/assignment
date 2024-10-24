#include <stdio.h>
int main(){
	int number;
	//prompt the user to enter number
	printf("enter te number:");
	scanf("%d",&number);
	
	do{
		printf("the value of number=%d\n",number);
		number ++;
		
	}
	while (number<20);
	
	return 0;
}
