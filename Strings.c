#include <stdio.h>

int main()
{
    char favFood[50];
    printf("What is your favourite food?: ");
    scanf("%49s", favFood); // The 49 is used to ensure the last character is for '\0''
    printf("Your favourit food is %s!!!!\n", favFood);

    int charCount; // Variable to store char length through while loop.
    while(favFood[charCount] != '\0')
    {
        charCount++;
    }
    printf("The charcater count is %d.\n", charCount);

    return (0);
}
