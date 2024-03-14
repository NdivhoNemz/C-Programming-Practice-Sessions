
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int maxValue = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1;

    printf("Guess a number 0 - %d: ", maxValue);
    
    int input;
    scanf("%d", &input);

    if(input == randomNumber)
    {
        printf("You WIN!!!!\n");
    }
    
    else
    {
        printf("The correct number was: %d, Please try again!\n", randomNumber);
    }
    
    return (0);
}
