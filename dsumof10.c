#include<stdio.h>


int main()

{
	int a,b,c;
	float average;
	printf("Sum of 10 numbers:");
	for (a=1;a<=10;a++)
	{
		printf("number-%d\n",a);
		scanf("%d",&b);
		c+=b;
	}
	average=c/10.0;
	printf("The sum of 10 no is:%d\n the average is:%f\n",c,average);
	return 0;
}