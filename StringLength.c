#include <stdio.h>
#include <string.h>

int main()
{
    char favFood[50];
    printf("What is your favourite food?: ");
    scanf("%49s", favFood); // The 49 is used to ensure the last character is for '\0''
    printf("Your favourit food is %s!!!!\n", favFood);

    int charCount = strlen(favFood); // Variable to store character length using <string.h>
    printf("The charcater count is %d.\n", charCount);

    return (0);
}
