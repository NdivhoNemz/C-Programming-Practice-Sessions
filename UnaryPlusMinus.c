#include <stdio.h>

int main()
{
    int money = 30;
    int bill = 15;

    int total = money - -bill;

    printf("Money is = %i, Bill is = %i\n", money, bill);
    printf("The total of Money - (-Bill) = %i\n", total);
    return (0);
}

// Operators do not always change the value of the variable
// Operators are changing the expression and not value of the variable
