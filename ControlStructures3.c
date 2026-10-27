//Control structures in C here WE see about Dynamic input from user , using elif
#include<stdio.h>
int main (){
	int a ;
	printf("Enter the Number Da lavade -> ");
	scanf("%d",&a);
	if(a<0)
	{
	printf("The Given number is less than Zero \n");
}
else if(a>0)
{
	printf("The given Numnber is greater than Zero\n");

}
else
{
	printf("The Given number is Zero \n");
}

}