#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;

    printf("This app will calculate the hypotenusof a right triangle.\n");

    //Get the first number
    printf("Enter the first value: ");
    //lf = double format character
    scanf("%lf", &a);

    //Get the second number
    printf("Enter the second value: ");
    //lf = double format character
    scanf("%lf", &b);

    //calculate the hypotenus
    double c = sqrt(a*a + b*b);

    //output the hypotenus
    printf("The hypotenus is %.2f\n", c);

    return (0);
}
