/*If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

This will declare the variable as "constant", which means unchangeable and read-only*/

#include <stdio.h>

int main()
{
    const int minutesPerHour = 60;
    const float PI = 3.14;

    printf("Minuets per Hour are %d \nThe value of PI is %.2f\n", minutesPerHour, PI);

    /*Good Practice
    Another thing about constant variables, is that it is considered good practice to declare them with uppercase.*/

    const int BIRTHYEAR = 1995;

    printf("Date of Birth %d", BIRTHYEAR);

    return 0;
}