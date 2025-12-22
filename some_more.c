#include <stdio.h>
int main()
{




    // true also means 1 false also means 0
    // In C, we don't have boolean data type
    // we use int to represent boolean values
//in this problem we didnt use format specifier for boolean as C does not have a built in boolean type
    bool IsStudent= 1;

    if(IsStudent)
    {
        printf("You are a Student\n");
    }
    else
    {
        printf("You are NOT\n");
    }



    return 0;
}