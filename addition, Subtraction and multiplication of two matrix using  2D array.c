#include<stdio.h>

int main()

{
	int a[2][2],b[2][2],c[2][2],k,i,n,j;
	
	printf("\n Enter the value first matrix : ");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n enter the value second matrix : ");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("   %d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n Addition of matrix : \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}					 

	for(i=0;i<2;i++)   
	{				
		for(j=0;j<2;j++)
		{
			printf("   %d",c[i][j]);
		}
	    printf("\n");
	}
	
	printf("\n\n Subtraction of matrix : \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}					 

	for(i=0;i<2;i++)   
	{				
		for(j=0;j<2;j++)
		{
			printf("   %d",c[i][j]);
		}
	    printf("\n");
	}

	printf("\n\n Multiplication of matrix : \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}					 

	for(i=0;i<2;i++)   
	{				
		for(j=0;j<2;j++)
		{
			printf("   %d",c[i][j]);
		}
	    printf("\n");
	}

	return 0;	

}
*/