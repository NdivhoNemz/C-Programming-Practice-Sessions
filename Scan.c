#include <stdio.h>

int main()
{
    int value;

    printf("What is the value of the circle: ");
    scanf("%i", &value);
    
    printf("The radius of the circle is: %i\n", value);
    return (0);
}

//&value = address of operator
