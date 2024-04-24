#include <stdio.h>

int main()
{
    typedef struct rectangle //Struct for rectangle
    {
        int length;
        int width;
    } rectangle;

    rectangle myRectangle = {5, 10};
    printf("Length = %d\nWidth = %d\n", myRectangle.length, myRectangle.width);
    
    typedef struct position // Struct for positioning
    {
        int x;
        int y;
    } position;
  
    position location = {38, 52};
    printf("Position: %d %d\n", location.x, location.y);

    typedef struct buldingPlan //Combined struct of positioning, rectangle and owner.
    {
        char owner[30];
        rectangle size;
        position loco;
    } buildingPlan;

    buildingPlan myHouse = {"Ndivho Nematandani", {5, 10}, {38, 52}};
    printf("The house at location %d %d, of length: %d and width: %d is owned by %s\n",
            myHouse.loco.x,
            myHouse.loco.y,
            myHouse.size.length,
            myHouse.size.width,
            myHouse.owner
            );

    int i;
    int size = 3;
    position pathsArray[] = {{3,4}, {5, 6}, {7, 8}}; //Struct array using the position struct

    for(i = 0; i < size; i++)
    {
        printf("%d %d\n", pathsArray[i].x, pathsArray[i].y);
    }
    
    //How to make a pointer to a struct:
    
    struct buldingPlan *structPointer = &myHouse;
    printf("The owner of the house is %s.\n", structPointer->owner);

    return 0;
}
