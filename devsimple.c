#include<stdio.h>
//simple calculator
int main()

{
	int a,b,c;
	printf ("enter the value of a");
	scanf("\n%d",&a);
	printf("enter the value of b");
	scanf("\n%d",&b);
	
	c=a+b;
	printf("%d",c);
	
	{
			int a,b,c;
	printf ("\nenter the value of a");
	scanf("\n%d",&a);
	printf("enter the value of b");
	scanf("\n%d",&b);
	
	c=a-b;
	printf("%d",c);
	}
	
	{
			int a,b,c;
	printf ("enter the value of a");
	scanf("\n%d",&a);
	printf("enter the value of b");
	scanf("\n%d",&b);
	
	c=a*b;
	printf("%d",c);
	}
	{
			int a,b,c;
	printf ("enter the value of a");
	scanf("\n%d",&a);
	printf("enter the value of b");
	scanf("\n%d",&b);
	
	c=a/b;
	printf("%d",c);
	}

	
	return 0;
}