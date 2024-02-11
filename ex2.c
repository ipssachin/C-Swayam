#include <stdio.h>

/*we create a program to calculate the area of a rectangle (by multiplying the length and width):*/

int main()
{

    int length = 40;
    int width = 60;
    int area;

    // Calculate the area of a rectangel.

    area = length * width;

    // Print the variables.

    printf("Lenght is %d and Width is %d so the area of the reactangel is: %d\n", length, width, area);

    return 0;
}