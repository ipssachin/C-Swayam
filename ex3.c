#include<stdio.h>

int main(){
    //Here's a real-life example of using different data types, to calculate and output the total cost of a number of items
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currancy = '$';


    // Print variables

    printf("Number of Items: %d\n", items);
    printf("Cost per item: %.2f %c \n", cost_per_item, currancy);
    printf("Total Cost = %.2f %c\n", total_cost, currancy);
}