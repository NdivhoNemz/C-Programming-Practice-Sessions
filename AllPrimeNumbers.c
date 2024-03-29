#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int input)
{
    
    int i;
    for(i = sqrt(input); i > 1; i--) //This will decrement the square root of the number being checked until 1
    {
        if(input % i == 0) //If the number can be divided by any number with no remainder than not a prime number.
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //get input from user
    ////print all primes from that number todown to zero(dow to 2)

    int input;
    printf("What's the number you'd like to check? ");
    scanf("%d", &input);

    for(int i = input; i > 1; i--)
    {
        bool prime = isPrime(i);
        
        if (prime)
        {
        printf("%d Is Prime!\n", i);
        }
        else
        {
        printf("%d Not Prime!\n", i);
        }
    }
    return (0);
}
