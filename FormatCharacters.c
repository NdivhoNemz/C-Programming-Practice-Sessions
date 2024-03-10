#include <stdio.h>

int main()
{
    double cash;

    printf("How much money do you have: ");
    scanf("%lf", &cash);

    printf("Decimal notation = %f\nScientific notation = %e\nComputer decides = %g\n", cash, cash, cash);
    return (0);
}
