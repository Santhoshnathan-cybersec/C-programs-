#include<stdio.h>
int main() {
    char str[10];
    printf("Enter a string: ");
    fflush(stdout);
    scanf("%s", str); // Scans a string from user input and stores it in variable str
    printf("You entered: %s\n", str);
    return 0;   
}
