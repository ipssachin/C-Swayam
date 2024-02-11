#include<stdio.h>


/*  Data        Type	        Size	                                    Description	Example
    int	        2 or 4 bytes	Stores whole numbers, without decimals	        1
    float	    4 bytes	Stores fractional numbers, 
                               containing one or more decimals.
                               Sufficient for storing 6-7 decimal digits	    1.99
    double	    8 bytes	Stores fractional numbers, 
                               containing one or more decimals. 
                               Sufficient for storing 15 decimal digits	        1.99
    char	    1 byte	       Stores a single character/letter/number, 
                               or ASCII values	                                'A'             */


int main(){

    // Char datatype is used to store a singel character.

    char myGrades = 'B';

    printf("My Grades: %c \n", myGrades);

    // Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes (''), as they are numbers:
    
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);  //  A
    printf("%c\n", b);  //  B
    printf("%c\n", c);  //  C

    // If you try to store more than a single character, it will only print the last character:

    // char myText = 'Hello';
    // printf("%c", myText);

    // To store multiple characters (or whole words), use strings

    char myText[] = "Hello";
    printf("%s", myText);

    // Numeric Types

    int myNum= 1000;
    float myFloat= 53.75;
    double myDouble = 19.99;

    printf("Integer: %d \n", myNum);
    printf("Float value: %f \n", myFloat);
    printf("Doubel value: %lf\n", myDouble);

    // Scientific Numbers "e" indecates the power of 10.

    float f1 = 35e3;
    double d1 = 12E4;

    printf("Scientific Float number %f \n", f1); // output 35000.000000
    printf("Scientific Double value: %lf \n", d1); // output 120000.000000

    // C Decimal Precision
    /*If you want to remove the extra zeros (set decimal precision), 
    you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:*/
    
    float myFloatNum = 6.5;
    double myDoubelNum = 19.99;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit after the decimal point
    printf("%.2f\n", myFloatNum); // Only show 2 digits after the decimal point
    printf("%.4f", myFloatNum);   // Only show 4 digits after the decimal point


    printf("%lf\n", myDoubelNum);   // Default will show 6 digits after the decimal point
    printf("%.1lf\n", myDoubelNum); // Only show 1 digit after the decimal point
    printf("%.2lf\n", myDoubelNum); // Only show 2 digits after the decimal point
    printf("%.4lf", myDoubelNum);   // Only show 4 digits after the decimal point

    /*The memory size refers to how much space a type occupies in the computer's memory.

    To actually get the size (in bytes) of a data type or variable, use the sizeof operator:*/
    char cs = 'a';
    printf("Memory size for int: %lu\n", sizeof(myNum));
    printf("Memory size for String: %lu \n", sizeof(myText));
    printf("Memory size for Float: %lu \n", sizeof(myFloatNum));
    printf("Memory size for Double: %lu \n", sizeof(myDoubelNum));
    printf("Memory size for Char: %lu \n", sizeof(cs));



    return 0;




}