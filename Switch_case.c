//Simple calculator using the Switch case statements 
#include<stdio.h>
int main()
{
    int a , b ;
    char choice;
    printf("Enter the Choice :");
    scanf("%c",&choice);
    printf("Enter the two valuse :");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 'a':
        printf("Addition of A & B : %d\n",a+b);
        break;

        case 'b':
        printf("Subtraction of A & B : %d\n",a-b);
        break;

        case 'c':
        printf("Multiplication of A & B : %d\n",a*b);
        break;


        case 'd':
        printf("Division of A & B : %d \n",a/b);
        break;
        
        default:
        printf("Error Bro -->><<--\n");
        break;

    }
}