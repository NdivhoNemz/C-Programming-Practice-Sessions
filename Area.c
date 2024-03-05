#include <stdio.h>

int main()
{
    int radius;
    printf("What is the radius  of the circle: ");
    scanf("%i", &radius);

    double area = 3.14159 * (radius * radius);
    printf("The area of a circle with the radius of %i is: %f\n", radius, area);
    return (0);
}

//&radius = address of operator
