#include <stdio.h>

int main()
{
    int eggs;
    printf("Number of eggs collected today: \n");
    scanf("%i", &eggs);

    double dozen = (double) eggs / 12;
    printf("If %i eggs are collected, then you have %f dozen of eggs.\n", eggs, dozen);
    return (0);
}
