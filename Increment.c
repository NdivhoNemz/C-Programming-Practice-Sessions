#include <stdio.h>

int main()
{
    {
        int pizzaToEat = 10;
        printf("If pizza to eat is %i.\n", pizzaToEat);
        
        int aftervariable = pizzaToEat++;
        printf("Then increment (pizza++) after variable = %i.\n", aftervariable);
    }

    {
        int pizzaToEat = 10;
        printf("If pizza to eat is %i.\n", pizzaToEat);
        
        int beforevariable = ++pizzaToEat;
        printf("And increment (++pizza) before variable = %i.\n", beforevariable);

    return (0);
    }
}
