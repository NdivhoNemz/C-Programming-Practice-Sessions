#include <stdio.h>

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
    int j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }
    return (0);
}
