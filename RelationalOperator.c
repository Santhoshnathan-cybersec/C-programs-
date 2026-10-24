
/* Relational Operators in C 
Relational operators are used to compare two values and return a boolean result. The following are the common relational operators in C:
1. == (Equal to): Checks if two values are equal.
2. != (Not equal to): Checks if two values are not equal.
3. < (Less than): Checks if the left operand is less than the right operand.
4. > (Greater than): Checks if the left operand is greater than the right operand.
5. <= (Less than or equal to): Checks if the left operand is less than or equal to the right operand.
6. >= (Greater than or equal to): Checks if the left operand is greater than or equal to the right operand.
*/
#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("Is a equal to b? : %d\n",a==b);//Equal to
    printf("Is a not equal to b? : %d\n",a!=b);//Not equal to
    printf("Is a less than b? : %d\n",a<b);//Less than
    printf("Is a greater than b? : %d\n",a>b);//Greater than
    printf("Is a less than or equal to b? : %d\n",a<=b);//Less than or equal to
    printf("Is a greater than or equal to b? : %d\n",a>=b);//Greater than or equal to
    return 0;
}
