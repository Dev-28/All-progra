#include<stdio.h>

int main()

{
	
int d,e;
printf("Enter the value of d:");
scanf("%d",&d);

if(d>0)
{
	printf("number is positive");
}
else if(d<0)
{
	printf("number is negative");
}
else 
{
	printf("number is zero");
}
	return 0;
}