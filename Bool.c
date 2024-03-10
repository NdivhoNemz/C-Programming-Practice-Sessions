/*
#include <stdio.h>
int main()
{
    _Bool iAmNice = 1; //Boolean logic, true or false. 0 = fales and any other number true.
    printf("Am I nice(1 is yes and 0 is no)? %i\n", iAmNice);
    return (0);
}
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool iAmNice = true;

    printf("Am I nice (1 is true, 0 is false)? %i\n", iAmNice);

    printf("%i\n", iAmNice + 10);
    return (0);
}

