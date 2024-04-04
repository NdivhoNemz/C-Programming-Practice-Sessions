#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i < 50; i++)
    {
        printf("Hello\n");
        
        if(i == 11)
        {
            break;
        }
    }
    printf("Print 11 times then BREAK!!!!\n");
    return (0);
}
