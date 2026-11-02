#include <stdio.h>

int main(void)
{
    int number;
    int reversed = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number is: %d\n", reversed);
    return 0;
}