#include<stdbool.h>
#include<stdio.h>

int main(){
    /* Bool is not built in data type hence it needs to be imported*/
    bool isCodingFun = true;
    bool isSunCool = false;

    printf("%d\n", isCodingFun);
    printf("%d \n", isSunCool);


    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty); 

    return 0;
}