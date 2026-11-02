#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[20];
    int m;
    printf(" Enter the string value : ");
    scanf("%19s",a); 
    m=atoi(a);
    printf("\nAfter converted to integer and multiplied by 2 :%d",m*2);
}