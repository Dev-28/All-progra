#include<stdio.h>

int main()

{
	int i,n,sum=0;
	printf("Enter the value of d:");
	scanf("%d",&n);
	
	
	printf("Odd numbers");
	for(i=1;i<=10;i++);
	{
		printf("Sum of odd numbers %d",2*i-1);
		sum+=2*i-1;
		
	}
	
	printf("\n the sum of natural number upto  %d terms : %d \n",n,sum);
	
	return 0;
}