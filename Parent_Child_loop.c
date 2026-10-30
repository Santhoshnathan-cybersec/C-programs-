#include<stdio.h>
int main()
{
    int i=3,j=2;
    for(i=0;i<3;i++)
    {
        printf("--------------------------------\n");
        printf("I am From Parent loop ->>> %d \n",i);
        for(j=0;j<2;j++)
        {
        printf("I am from Child loop -->> %d\n",j);

        }
    }
}