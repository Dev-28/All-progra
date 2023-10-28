#include<stdio.h>

int main()

{
	int D;
	printf("Enter the D");
	scanf("%d",&D);
	
	if(D>0)
	{
		printf("Good Morning");
	}
	else if(D<0)
	{
		printf("Good Night");
	}
	else 
	{
		printf("Good Noon");
	}
	return 0;
}