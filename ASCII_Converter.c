#include <stdio.h>

int main()
{
    char ASCII;
    printf("Please enter a character: ");
    scanf("%c", &ASCII);
    printf("Character '%c' is coverted to integer %i in ASCII.\n", ASCII, ASCII);

    int integer;
    printf("Please enter an integer from 0 - 127: ");
    scanf("%i", &integer);
    printf("Integer %i is converted to character '%c' in ASCII.\n", integer, integer);

    return (0);
}
