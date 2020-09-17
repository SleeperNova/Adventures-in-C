/*
    Francisco Saavedra

    Prints a character and some numbers
*/

#include <stdio.h>

int main()
{
    printf("A letter grade of %c\n", 'B'); //char
    printf("A test score of %d\n", 87); //integer
    printf("A class average of %.1f\n", 87.9); //decimal: %.1f, where .1 is the rounding precision
    return 0;
}