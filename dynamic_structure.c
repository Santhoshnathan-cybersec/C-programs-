#include <stdio.h>

struct chikkom {
    int s, r;
};

int main(void) {
    struct chikkom values;

    printf("Enter the first number: ");
    scanf("%d", &values.s);

    printf("Enter the second number: ");
    scanf("%d", &values.r);

    printf("Value is: %d\n", values.s + values.r);

    return 0;
}