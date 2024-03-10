#include <stdio.h>

/*
 * + = addition
 * - = subtruction
 * / = division
 * * = multiplication
 */

int main ()
{
    int x = 2 + 3 * 4 / 3 - 2; // operator predecense = BODMAS
    printf("%i\n", x);
    return (0);
}
