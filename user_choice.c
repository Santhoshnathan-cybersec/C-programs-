//Simple calculator 
#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter the Choice 1) ADD 2) Sub 3)Mul 4)Div :");
	scanf("%d",&choice);
	printf("Enter the values :  ");
	scanf("%d",&a);
	scanf("%d",&b);
	if(choice==1)
	{
		printf("Addition : %d \n",a+b);
	}
	else if(choice==2)
	{
		printf("Subrataction : %d \n",a-b);

	}
	else if(choice==3)
	{
		printf("Multiplication : %d \n",a*b);

	}
	else if (choice==4)
	{
		printf("Div : %d \n",a%b);
	}
	else
	{
		printf("Choose correct options da baddu ");
	}
}