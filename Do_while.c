//Learn about Do while in c 
//IN do while it executes once even the given condition is false but in while if the condition is true its executed or not executed 
#include<stdio.h>
int main()
{
    
    do{
        printf("This is from do \n");
    }while(0); //The 0 represents the false 
    while(0)
    {
        printf("This is from while ");
    }
}