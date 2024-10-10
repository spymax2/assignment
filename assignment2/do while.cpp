# include <stdio.h>
int main()
{
	int number;
	printf("enter number:");
	scanf("%d",&number);
	do{
		printf("the value of number=%d\n",number);
		number++;
	}
	while(number<20);
	
	
	return 0;
}