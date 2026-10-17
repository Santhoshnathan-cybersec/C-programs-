#include<stdio.h>
int main()
{
    int x;
    float y;
    char z;
    printf("Enter an values : ");
    scanf("%d %f %c",&x,&y,&z); //Scans an integer, float and character from user input and stores it in variable x, y and z respectively
    printf("You entered integer: %d\n", x);
    printf("You entered float: %f\n", y);
    printf("You entered character: %c\n", z);
    return 0;   
}