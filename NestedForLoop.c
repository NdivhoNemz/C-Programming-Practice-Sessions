#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i <= 10; i++)
    {
        int k;
        for(k = i; k >= 0; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }
    return (0);
}
