#include <stdio.h>

int main()
{
    int i = 0;
    int number = 101;
    while(i >= 0)
    {
        printf("%d ", i);
        
        if(i == number)
        {
            printf("\nWe found the number and broke at 101!!!\n");
            break;
        }
        i++;
    }
    return (0);
}
