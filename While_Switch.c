#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    printf("--->>> SIMPLE CALCULATOR <<<--- ");
    printf("Enter the First Number : ");
    scanf("%d",&a);
    printf("Enter the Second Number : ");
    scanf("%d",&b);
    while(1)
    {
        printf("->Add\n-->Sub\n-->Mul\n-->Div\n-->Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
            printf("Addition : %d",a+b);
            break;
            case 2:
            printf("Subtraction : %d",a-b);
            break;
            case 3:
            printf("Mulitplication : %d",a*b);
            break;
            case 4:
            printf("Division : %d",a/b);
            break;
            case 5:
            printf("Exitingg\n ");
            exit(-1);
            return 0;
            default:
            printf("Errror choose correct options ");
    }
    }
}