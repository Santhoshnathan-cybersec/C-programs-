#include<stdio.h>
int main() {
    int a;
    float b;
    char c;
    printf("Enter an integer: ");
    scanf("%d",&a); //Scans an integer from user input and stores it in variable a
    printf("Enter a float: ");
    scanf("%f",&b);//Scans a float from user input and stores it in variable b 
    printf("Enter a character: ");
    scanf(" %c",&c); // Note the space before %c to consume any leftover
    printf("You entered integer: %d\n", a);
    printf("You entered float: %f\n", b);
    printf("You entered character: %c\n", c);
    return 0;
}
