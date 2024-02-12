#include<stdio.h>


int main(){

    int num1 = 23;
    int num2 = 7;

    float sum = (float) num1/num2;

    printf("%.1f\n", sum);


    int maxScore = 500;

    int userScore = 420;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */

    float percentage = (float) userScore/maxScore * 100.0;

    printf("Users Percentage is $.2f\n", percentage);


    return 0;
}