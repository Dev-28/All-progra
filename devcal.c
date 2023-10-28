#include<stdio.h>
//simple calculator
int main()

{
	int a,b,c;
	float d;
	printf ("enter the value of a");
	scanf("\n%d",&a);
	printf("enter the value of b");
	scanf("\n%d",&b);
	printf("\nanswer of addition");
	c=a+b;
	printf("\n%d",c);
	
	printf("\nanswer of substraction");
	c=a-b;
	printf("\n%d",c);
	
	printf("\nanswer of multiplication");
	c=b*a;
	printf("\n%d",c);
	
	printf("\nanswer of division");
	d=a/b;
	printf("\n%f",d);
		
	return 0;
}