/*
    Francisco Saavedra

    Counts from 1 to 5
*/

#include <stdio.h>

int main()
{
    int ctr = 0;
    ctr = ctr + 1;
    
    printf("ctr is at %d\n", ctr); //1
    ctr = ctr + 1;
    printf("ctr is at %d\n", ctr); //2
    ctr = ctr + 1;
    printf("ctr is at %d\n", ctr); //3
    ctr +=  1; // another way to add 1 to ctr
    printf("ctr is at %d\n", ctr); //4
    ctr +=  1;
    printf("ctr is at %d\n", ctr); //5
    return 0;
}