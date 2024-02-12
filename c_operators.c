/*C divides the operators into the following groups:

Arithmetic operators +;-;*;/;%;++;-- etc
Assignment operators =;+=;-=;*=;/=;%=;&=;|=;^=;>>=;<<=
Comparison operators ==;!=;>;<;>=;<=
Logical operators &&;||;! (not)
Bitwise operators
*/

#include <stdio.h>

int main()
{

    int x = 5;
    int y = 60;

    float result;

    result = x + y;
    printf("%f\n", result);

    result = x - y;
    printf("%f\n", result);

    result = x / y;
    printf("%f\n", result);

    result = x % y;
    printf("%f\n", result);

    result = x++;
    printf("%f\n", result);

    result = y--;
    printf("%f\n", result);

    result += x;
    printf("%f\n", result);

    result -= y;
    printf("%f\n", result);

    result *= x;
    printf("%f\n", result);

    result /= x;
    printf("%f\n", result);

    result = x %= y;
    printf("%f\n", result);

    // Bitwise And

    result = (x &= y);
    printf("%f\n", result);

    // bitwise or

    result = x |= y;
    printf("%f\n", result);

    result = x ^= y;
    printf("%f\n", result);
    // right shift
    x >>= 2;
    printf("%d\n", x);

    //left Shift
    x <<= 3;
    printf("%d\n", x);
}
