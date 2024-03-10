#include <stdio.h>

/* 
 * modulus operator - remainder (integer)
 * can be used to see if a number is odd or even
 */

int main ()
{
    int piecesOfPizza = 5;
    int numberOfEaters = 2;
    int leftOver = piecesOfPizza % numberOfEaters;

    printf("%i\n", leftOver);
    return (0);
}
