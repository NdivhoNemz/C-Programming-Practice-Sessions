#include <stdio.h>

int main()
{
    int slices = 20;
    int *p = &slices;

    printf("Slices: %d\n", slices);
    printf("Slices (through pointers): %d\n", *p);
    printf("\n");

    slices = 25;
    printf("Value changed through 'slices = 25;':\n");
    printf("Slices: %d\n", slices);
    printf("Slices (through pointers): %d\n", *p);
    printf("\n");
    
    *p = 30;
    printf("Value changed through '*p = 30;':\n");
    printf("Slices: %d\n", slices);
    printf("Slices (through pointers): %d\n", *p);
    printf("\n");

    slices++;
    printf("Value incremented through 'slices++;':\n");
    printf("Slices: %d\n", slices);
    printf("Slices (through pointers): %d\n", *p);
    printf("\n");

    (*p)++; // *p++; -> *(p++). will be incorrect due to precedence.
    printf("Value incremented through '(*p)++;':\n");
    printf("Slices: %d\n", slices);
    printf("Slices (through pointers): %d\n", *p);


    return (0);
}
