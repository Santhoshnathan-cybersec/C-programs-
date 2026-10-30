#include<stdio.h>
int main()
{
    int index;
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    printf("Values are -->> See Down \n");
    for(index=0;index<15;index++)
    {
        printf("index %d : %d\n",index,a[index]);
    }
}