#include<stdio.h>

int main(){
    
    /*The newline character (\n) is called an escape sequence, 
    and it forces the cursor to change its position to the beginning 
    of the next line on the screen. This results in a new line.*/
    
    printf("Hello world. \nThis is the new line.\n");

    printf("\tThis adds a tab.\n\n");

    printf("\\ This will add a backslash in the sentence.\n");

    printf("\"double quote\" within doubel qoutes.");

    return 0;
}