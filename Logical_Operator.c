/* Logical Operators in C 
logical operators are used to combine multiple conditions and return a boolean result. The following are the common logical operators in C:
1. && (Logical AND): Returns true if both conditions are true.
2. || (Logical OR): Returns true if at least one condition is true.
3. ! (Logical NOT): Returns true if the condition is false and vice versa.
*/
#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("Is a greater than b AND a is less than b? : %d\n",(a>b)&&(a<b));//Logical AND
    printf("Is a greater than b OR a is less than b? : %d\n",(a>b)||(a<b));//Logical OR
    printf("Is a NOT greater than b? : %d\n",!(a>b));//Logical NOT
    return 0;
}                                                           
