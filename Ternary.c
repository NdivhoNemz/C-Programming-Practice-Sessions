#include <stdio.h>

int main()
{
    double money = 50;
    double cost = 65;

// With Ternary(Conditional) operator you can do this:

    money > cost ? printf("You can affor it!\n") : printf("You are %.2lf short!!\n", cost - money);

// Instead of IF statement

/*
    if(money > cost)
    {
        printf("You can afford it!\n");
    }
    else
    {
        printf("You are %.2lf short!!\n", cost - money);
    }
*/
    return (0);
}
