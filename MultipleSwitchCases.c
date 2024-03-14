#include <stdio.h>

int main()
{
    int slices;
    printf("How many slices of pizza did you eat: ");
    scanf("%d", &slices);

    switch(slices)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            printf("You truly are diciplined mate.\n");
            break;
        case 4:
            printf("That's 4 slices mate, that ain't right!!!!\n");
            break;
        default:
            printf("GET TO THE GYM ASAP!!!!\n");
            break;
    }

    int caloriesPerSlice = 250;
    int totalCalories = caloriesPerSlice * slices;
    printf("You had a total of %d calories.\n", totalCalories);

    return (0);
}
