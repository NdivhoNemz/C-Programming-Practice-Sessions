#include <stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i]++;
        printf("%d ", arr[i]);
    }
}

void doSomething(int a)
{
    a++;
}

int main()
{

    int slicesEachMeal[] = {4, 5, 4, 6, 3, 2};
    printArray(slicesEachMeal, 6);
    printf("\n");

    int i;
    for(i = 0; i < 6; i++)
    {
    printf("%d ", slicesEachMeal[i]);
    }

    int a = 5;
    doSomething(a);
    printf("\nA = %d\n", a);
    return 0;
}
