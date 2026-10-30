#include<stdio.h>
int main()
{
    int x[50],i,max;
    printf("Enter the maximum number of values to insert :-->:");
    scanf("%d",&max);
    for (i=0;i<max;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Displaying the number Below -->>>\n");
    for (i=0;i<max;i++)
    {
        printf("%d\t",x[i]);
    }
}