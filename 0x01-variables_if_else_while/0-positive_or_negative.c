#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - assigns a random number to int n everytime
 *   * it executes, and prints it
 *    * Return: Always 0 (Success)
 *     */
int main()
{
    int n;
    
    srand(time(NULL));
    n = rand() - RAND_MAX / 2;
    
    printf("%d ", n);
    
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }
    
    return 0;
}

