#include <stdio.h>

int main()
{
    int select;
    printf("PLEASE SELECT FROM 1 - 4:\n");
    printf("1. NEW GAME\n");
    printf("2. CONTINUE GAME\n");
    printf("3. SAVE GAME\n");
    printf("4. EXIT\n");
    printf("ENTER HERE: ");
    scanf("%d", &select);

    switch(select)
    {
        case 1:
            printf("Starting new game...\n");
            break;
        case 2:
            printf("Continuing game...\n");
            break;
        case 3:
            printf("Loading game...\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("DO NOT FORGET TO SAVE!!!\n");
            break;
    }
    printf("FIFA24\n");
    return (0);
}
