#include <stdio.h>

int main()
{
    int myGrades[] = {10, 12, 14, 15, 16, 17, 54, 34, 23};

    //The above is to declare all elements of the arrat at once.
    //The other option is top declare a single element at a time:
    // int myGrades[0] = 10;
    // int myGrades[4] = 16;
    // int myGrades[8] = 23;

    printf("myGrades[0] will print the 1st element located in base 0 = '%d'\n", myGrades[0]);
    printf("myGrades[4] will print the 5th element located in base 4 = '%d'\n", myGrades[4]);
    printf("myGrades[8] will print the 9th element located in base 8 = '%d'\n", myGrades[8]);
    
    // An single element in this array is simply an integer and can be used as such

    int x = myGrades[0] * 2;
    printf("int x = myGrades[0] * 2 = %d, as myGrades[0] refers to element located in base 0\n", x);

    return (0);
}
