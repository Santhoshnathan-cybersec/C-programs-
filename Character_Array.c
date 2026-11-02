#include<stdio.h>
int main()
{
    char a[20];
    int i;
    printf("Enter the name :>");
    for (i=0;i<20;i++)
    {
        scanf("%c",&a[i]);
   
    }

        printf("You Entered ->> %s",a);

}