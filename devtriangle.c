#include<stdio.h>
//area of triangle
int main()

{
	int h,b;
	float area;
	
	printf("enter the value of h");
	scanf("%d",&h);
	
	printf("enter the value of b");
	scanf("%d",&b);
	
	area=h*b/2;
	printf("%f",area);
	
	
	return 0;
}