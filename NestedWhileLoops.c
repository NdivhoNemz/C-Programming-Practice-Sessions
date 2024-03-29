#include <stdio.h>

int main()
{
    int i = 0;
    int k;

    while(i <= 10)
    {
        k = i - 1;
        printf("%d ", i);
        i++;

        while(k >= 0)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
    return (0);
}
