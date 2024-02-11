#include<stdio.h>

int main(){



    /*Variables are containers for storing data values, like numbers and characters.

    In C, there are different types of variables (defined with different keywords), for example:

        int - stores integers (whole numbers), without decimals, such as 123 or -123
        float - stores floating point numbers, with decimals, such as 19.99 or -19.99
        char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
        
    type variableName = value;*/

    int myNumber = 35;          // Integer (whole number)
    float myFloatNum = 3.141;   // Floating point number
    char myLetter = 'D';       // Character

    /*Format Specifiers
    
    Format specifiers are used together with the printf() function 
    to tell the compiler what type of data the variable is storing. 
    It is basically a placeholder for the variable value.

    A format specifier starts with a percentage sign %, followed by a character.

    For example, to output the value of an int variable, 
    use the format specifier %d surrounded by double quotes (""), inside the printf() function
    */

    printf("My Favourite Number is: %d\n",myNumber);
    printf("Value of Pi: %f\n",myFloatNum);
    printf("Third letter of the Albhabet is: %c!!!\n\n",myLetter);
    printf("ha!ha!ha! Though Pi is %f, my favourite number is %d and the third letter of the Alphabet is c not %c.\n\n", myFloatNum, myNumber, myLetter);


    /*Change Variable Values
    If you assign a new value to an existing variable, it will overwrite the previous value.*/

    int myNewNumber = 25;  
    myNumber = myNewNumber;     // Now the myNumber value changed to 25 from 35.

    printf("Changed value of Favourite Number is: %d\n",myNumber);

    // Value reassignement from one variable to another 
    
    char myNewLetter = 'C';

    myLetter = myNewLetter;

    printf("Third letter of the Albhabet is: %c.\n\n",myLetter);


    /*Value can be copied to empty variable*/

    // Declare a myOtherNum variable without assigning it a value
    int myOtherNum;

    // Assign value of myNum to myOtherNum
    myOtherNum = myNewNumber;

    printf("New value assigned to empty variable 'myOtherNum' is : %d \n\n", myOtherNum);


    /*Adding variables togather*/

    int x = 5;
    int y = 6;

    int sum = x+y;
    
    printf("The sum of x & y =  %d\n", sum);

    /*Declare Multiple Variables
    
    To declare more than one variable of the same type, use a comma-separated list:
    */

    int a = 5, b =6, c = 50;

    printf("sum: %d\n\n",a+b+c);

    //You can also assign the same value to multiple variables of the same type:

    int z,s,t;

    z=s=t=40;

    printf("%d\n\n",z+s+t);


    /*C Variable Names
    All C variables must be identified with unique names.

    These unique names are called identifiers.

    Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

    Note: It is recommended to use descriptive names in order to create understandable and maintainable code
    
    The general rules for naming variables are:

        Names can contain letters, digits and underscores
        Names must begin with a letter or an underscore (_)
        Names are case sensitive (myVar and myvar are different variables)
        Names cannot contain whitespaces or special characters like !, #, %, etc.
        Reserved words (such as int) cannot be used as names*/

    int minutesPerHour = 60;

    printf("It is a good practice to use discreptive names for variables like minutesPerHout = %d\n. ", minutesPerHour);
    
    return 0;
    
}