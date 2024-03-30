#include <stdio.h>

int main()
{
    int i = 0;
    int k;
    while(i <= 10) // Prints vertically from 0 - 10 on a new line 
    {
        printf("%d ", i);
        
        k = i -1; // Always start a number below to avoid printinf same number twice
        while(k >= 0) // Counts down i to 0
        {
            printf("%d ", k);
            k--;
        }
        i++;
        printf("\n");
    }
    return (0);
}
