#include <stdio.h>

int main()
{
    {
        int pizzaToEat = 10;
        printf("If pizza to eat is %i.\n", pizzaToEat);
        
        pizzaToEat += 100;
        printf("Then increment (pizza += 100) = %i.\n", pizzaToEat);
    }

    {
        int pizzaToEat = 10;
        printf("If pizza to eat is %i.\n", pizzaToEat);
        
        pizzaToEat -= 5;
        printf("And decrement (pizza -= 5) = %i.\n", pizzaToEat);

    return (0);
    }
}
