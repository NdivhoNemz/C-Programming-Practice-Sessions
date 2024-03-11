// User guessesa number from 0-5.
// Output whether or not the person is correct.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Psuedo random number generator
    // This gets seeded
    // Outputs result
    // Seed - generated from the clock
    
    int maxValue = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1;

    //printf("%d\n", randomNumber);

    //modulus operater %
    //remainder of some division

    printf("Guess a number 0 - %d: ", maxValue);
    
    int input;
    scanf("%d", &input);

    if(input == randomNumber)
    {
        printf("You WIN!!!!\n");
    }
    
    else
    {
        printf("You suck! Try again!\n");
    }
    
    return (0);
}
