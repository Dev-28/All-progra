#include<stdio.h>

int main()

{
	int t;
	printf("Enter the Temperature:");
	scanf("%d",&t);
	
	if(t<0)
	{
		printf("Freezing weather");
	}
	else if(t>=0  &&  t<=10)
	{
		printf("Very cold weather");
	}
	else if(t>=20 && t<=30)
	{
		printf("Normal weather");
	}
	else if(t>=30  && t<=40)
	{
		printf("Hot weather");
	}
	else
	{
		printf("Too hot weather");
	}
	return 0;
}