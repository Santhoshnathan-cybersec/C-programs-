/*
Bitwise Operators in C
 Bitwise operators are used to perform bit-level operations on integer data types. They allow manipulation of individual bits within a binary representation of numbers. The following are the common bitwise operators in C:
1. AND (&): Performs a bitwise AND operation.
2. OR (|): Performs a bitwise OR operation.
3. XOR (^): Performs a bitwise exclusive OR operation.
A = 0100  (4)
B = 0010  (2)
------------
A & B = 0000  (0)
A | B = 0110  (6)
A ^ B = 0110  (6)

*/
#include<stdio.h>
int main(){
    int a=4,b=2;
    printf("The bitwise AND of a and b is : %d\n",a&b);//Bitwise AND
    printf("The bitwise OR of a and b is : %d\n",a|b);//Bitwise OR
    printf("The bitwise XOR of a and b is : %d\n",a^b);//Bitwise XOR
    return 0;  
}