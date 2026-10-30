//Lets know abot the while loop
#include<stdio.h>
int main()
{
    int a ;
    int range;
    printf("Enter any number :");
    scanf("%d",&range);
    while(a<=range)
    {
        printf("Tenth table : %d\n",a*10);
        a=a+1;
    }
    printf("Value When Program Stopped : %d\n",a);
}