#include<stdio.h>
int main(){
    int a;
    char w[10];
    printf("Enter  the numbers \n");
    scanf("%d",&a);
    sprintf(w,"%d",a);
    printf("The string is :%s\n",w);

}