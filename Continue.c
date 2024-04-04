#include <stdio.h>

int main()
{
    printf("This will print from 0 - 10 and highlight lucky number through CONTINUE:\n");
    int i = 0;
    while (i <= 10)
    {
        if (i == 7)
        {
            printf("Lucky Number 7\n");
            i++; // Iteration important toensure loop is not stuck at 7.
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    return (0);
}
