#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
	printf("\n Enter the value first matrix : ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n enter the value second matrix : ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("   %d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n Addition of matrix : \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}					 

	for(i=0;i<3;i++)   
	{				
		for(j=0;j<3;j++)
		{
			printf("   %d",c[i][j]);
		}
	    printf("\n");
	}
	return 0;
}