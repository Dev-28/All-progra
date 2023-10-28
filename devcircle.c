#include<stdio.h>
//area of circle
int main()

{
	int r;
	float Area;
	
	printf("Enter the value of r");
	scanf("%d",&r);
	
	Area=3.14*r*r;
	printf("%f",Area);
	
	return 0;
}