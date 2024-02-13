#include <stdio.h>

int main()
{
    /*Conditions and If Statements
    You have already learned that C supports the usual logical conditions from mathematics:

        Less than: a < b
        Less than or equal to: a <= b
        Greater than: a > b
        Greater than or equal to: a >= b
        Equal to a == b
        Not Equal to: a != b
    You can use these conditions to perform different actions for different decisions.

    C has the following conditional statements:

        Use if to specify a block of code to be executed, if a specified condition is true
        Use else to specify a block of code to be executed, if the same condition is false
        Use else if to specify a new condition to test, if the first condition is false
        Use switch to specify many alternative blocks of code to be executed*/

    int time = 22;
    if (time < 10)
    {
        printf("Good morning!");
    }
    else if (time < 20)
    {
        printf("Good Day");
    }
    else
    {
        printf("Good evening!");
    }

    //Short Hand If...Else (Ternary Operator)

    int newTime=20;

    (time<18)? printf("Good Day."): printf("Good evening.");

    return 0;
}
