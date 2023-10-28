#include<stdio.h>

int main()

{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	
	if(number>100)
	{
		printf("We have profit");
	}
	else if(number<100)
	{
		printf("We have loss");
	}
	else if(number=0)
	{
		printf("No loss profit");
	}
	
	return 0;
}