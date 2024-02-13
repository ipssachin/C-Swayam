#include <stdio.h>

int main()
{
    int doorCode = 1335;
    (doorCode == 1337) ? printf("Correct Code.\n The door is now open.") : printf("Wrong Code.\nThe door remains closed.");

    return 0;
}