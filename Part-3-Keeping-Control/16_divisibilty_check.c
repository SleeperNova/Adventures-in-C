/*
    Francisco Saavedra      

    Divisibilty Check by 3 and 4
*/

#include <stdio.h>

int main()
{
    int i;
    for ( i = 1; i < 100; i++)
    {
        //checks if number is divisible by 4 and 4
        printf("Testing %d\n", i);
        if ((i%3 == 0) && (i%4 == 0))
        {
            printf("Found it!\n");
            break;
        }
        //checks number is divisible by 3
        if (i%3 == 0)
        {
            printf("I am divisible by 3.\n");
            printf("But that's only half the test!\n");
            continue;
        }
        //checks number is divisible by 4
        if (i%4 == 0)
        {
            printf("I am divisible by 4.\n");
            printf("One out of two isn't bad!\n");
            continue;
        }
        printf("I'm not divisible by 3 or 4!\n");
    }
    return 0;
}