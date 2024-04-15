#include <stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int const rows = 5;
    int const columns = 3;
    
    int studentGrades[rows][columns] =
    {
        {3, 6, 9},
        {4, 8, 12},
        {5, 10, 15},
        {6, 12, 18},
        {7, 14, 21}
    };

    int i;

    for(int i = 0; i < rows; i++)
    {
        printArray(studentGrades[i], columns);
        printf("\n");
    }
    return (0);
}
