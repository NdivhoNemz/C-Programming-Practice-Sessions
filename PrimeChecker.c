#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int input;
    printf("What's the number you'd like to check? ");
    scanf("%d", &input);
    int isPrime = true;

    int i;
    for(i = sqrt(input); i > 1; i--) //This will decrement the square root of the number being checked until 1
    {
        printf("%d ", i);
        if(input % i == 0) //If the number can be divided by any number with no remainder than not a prime number.
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        printf("\nIs Prime!\n");
    }
    else
    {
        printf("\nNot Prime!\n");
    }

    return (0);
}
