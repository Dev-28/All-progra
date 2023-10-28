#include<stdio.h>

int main()

{
	int a,choice,qty,total,totalamt;
	char ch;
	printf("\n*****Jwellery Shop*****");
	printf("\nuser id:");
	scanf("%d",&a);
	
	do
	{
		Menu:
			printf("\nType of Jwellery");
			printf("1.Chain  price=RS10000\n");
			printf("2.Neckless   price=Rs20000\n");
			printf("3.Rings    price=Rs30000\n");
			printf("4.Loose     price=Rs40000\n");
			printf("Please enter your choice:");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					{
						printf("\nYou have selected chain");
						printf("\nEnter the quantity:");
						scanf("%d",&qty);
						for(int i=1;i<=qty;i++)
						{
							total=10000*qty;
						}
						printf("\nAmount:%d",total);
						break;
					}
					case 2:
						{
							printf("You have selected Neckless\n");
							printf("Enter the quantity:");
							scanf("%d",&qty);
							for(int i=1;i<=qty;i++)
							{
								total=20000*qty;
							}
							printf("\nAmount:%d",total);
							break;
						}
						case 3:
						{
							printf("You have selected Rings\n");
							printf("Enter the quantity:");
							scanf("%d",&qty);
							for(int i=1;i<=qty;i++)
							{
								total=30000*qty;
							}
							printf("\nAmount:%d",total);
								break;
						}
						case 4:
						{
							printf("You have selected Loose\n");
							printf("Enter the quantity:");
							scanf("%d",&qty);
							for(int i=1;i<=qty;i++)
							{
								total=40000*qty;
							}
							printf("\nAmount:%d",total);
								break;
						}
						default:
						{
							printf("Not selected jewellary type");
							printf("\n");
							goto Menu;
							break;
						}
						
			}
			totalamt+=total;
			printf("\nTotal amount is=%d\n",totalamt);
			printf("\nDo you want place more order?y&n:");
			scanf("%s",&ch);
			
	}while(ch!='n');
	if(ch=='n')
	{
		printf("\nYour Bill");
		printf("\nTotal amount is=%d",totalamt);
		printf("\nThank you");
	}
	return 0;
}