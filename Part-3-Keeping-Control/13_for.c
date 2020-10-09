/*
    Francisco Saavedra

    For loop
*/

#include <stdio.h>

int main()
{
    int i, j, k;

    i = 0;
    while (i <= 5)
    {
        printf("Still counting...");
        printf("%d\n", i);
        i++;//0 to 5 in while loop
    }

    printf("\n");

    j = 6; 
    do
    {
        printf("Still counting...");
        printf("%d\n", j);
        j++;//6 to 10 in do while loop
    } while (j <= 10);
    
    printf("\n");

    for (k = 11; k <= 20; k++)
    {
        printf("Still counting...");
        printf("%d\n", k); //0 to 10 in for loop
    }
    return 0;
}