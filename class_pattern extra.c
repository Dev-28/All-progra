#include <stdio.h>

int main()

{
   int i,j,num;
   
   printf("\n Enter the number : ");
   scanf("%d",&num);
   
   printf("     \n");
   
   for(i=1;i<=num;i++)
   {
	for(j=1;j<=i;j++)
	   {
	   printf("*");
	   }
	printf("\n");
   }
   
   return 0;
}

