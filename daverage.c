#include<stdio.h>

int main()

{
	int a,b,sum=0;
	float average;
	printf("Enter 10 numbers:");
	for(a=1;a<=10;a++)
	{
		printf("number-%d:",a);
		scanf("%f",&b);
		sum=+b;
	}
	average=sum/10.0;
	printf("The sum of 10 number is:%d\n The average is:%f\n,",sum,average);
	return 0;
}