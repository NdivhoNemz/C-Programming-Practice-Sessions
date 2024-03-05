#include <stdio.h>

int main()
{
    char name[32];
    printf("Password please: ");
    scanf("%s", name);

    printf("Good day Mr Bond, your password is %s.\nBETTER CHANGE IT TO 007!!!\n", name);
    return (0);
}
