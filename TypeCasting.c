#include <stdio.h>

int main()
{
    int pizzaSlice = 25;
    int people = 3;

    double shared = (double) pizzaSlice / people;

    printf("%i pizza slices shared amongs %i people is equal to %.2f each.\n", pizzaSlice, people, shared);
    return (0);
}
