#include <stdio.h>

int main()
{
    int max;
    printf("What is the max value? ");
    scanf("%d", &max);

    for(; max >= 0; max--)
    {
        printf("%d\n", max);
    }

    printf("This For loop countdown from the max value given to 0.\n");
    printf("EACH TIME on a new line the max value decrements by 1 'max--'.\n");
    return (0);
}
