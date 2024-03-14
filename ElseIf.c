#include <stdio.h>

// Create a doctor's office menu.
// Have 4 differnet options.

int main()
{
    printf("PLEASE CHOOSE A NUMBER FROM 1-4: \n");
    printf("1. Add a new patient.\n");
    printf("2. View a patient.\n");
    printf("3. Search for a patient.\n");
    printf("4. Exiting...\n");
    printf("ENTER NUMBER HERE: ");

    int input;
    scanf("%d", &input);

    if(input == 1) 
    {
        printf("ADDING PATIENT\n");
    }
    else if(input == 2)
    {
        printf("VIEWING PATIENT\n");
    }
    else if(input == 3)
    {
        printf("SEARCHING FOR PATIENT");
    }
    else if(input == 4)
    {
        printf("ENDING...\n");
    }
    else
    {
        printf("INVALID INPUT\n");
    }

    return (0);
}
