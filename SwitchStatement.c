#include <stdio.h>

int main()
{
    int slices;
    printf("How many slices of pizza did you eat: ");
    scanf("%d", &slices);

    switch(slices)
    {
        case 1:
            printf("Well done for just eating 1 slice!!!\n");
            break;
        case 2:
            printf("I guess 2 slices aren't too bad.\n");
            break;
        case 3:
            printf("With 3 slices you are treading a crazy line.\n");
            break;
        case 4:
            printf("That's 4 slices mate, that ain't right!!!!\n");
            break;
        default:
            printf("GET TO THE GYM ASAP!!!!\n");
            break;
    }

    return (0);
}
