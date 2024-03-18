#include <stdio.h>

int main()
{
    int max;
    printf("What is the max value? ");
    scanf("%d", &max);

    int i;
    for(i = 1; i <= max; i++)
    {
        printf("%d\n", i);
    }

    printf("This For loop prints a number from 1 to the max value given.\n");
    printf("EACH TIME on a new line and incrementing by 1 due to the 'i++' update.\n");
    return (0);
}
