# include <stdio.h>
int main()
{
	int i;
	int range;
	printf("enter range:");
	scanf("%d",&range);
	for(i=0;i<=range;i++){
		printf("%d\t",i);
	}
	
	return 0;
}