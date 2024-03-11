#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isPizzaHealthy; //true or false statement
    int decision; // True = 1, False = 0

    printf("Is Pizza healthy? 0 if false, 1 if true: ");
    scanf("%d", &decision);
    isPizzaHealthy = decision;

    if(isPizzaHealthy) //If TRUE run code
    {
        printf("Exercise, You fat FUCK!!!!\n");
    }
    
    else //If FALSE run code
    {
        printf("That's my guy!!!\n");
    }

    return 0;
}
