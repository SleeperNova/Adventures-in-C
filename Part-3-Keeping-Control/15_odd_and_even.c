/*
    Francisco Saavedra

    odd and even
*/

#include <stdio.h>

int main()
{
    int i;
    for ( i = 1; i <= 10; i++)
    {   
        if ((i%2) == 1)//i is odd if true
        {
            printf("I'm rather odd...\n");
            continue;
        }
        printf("Even up!\n");
    }
    return 0;
}