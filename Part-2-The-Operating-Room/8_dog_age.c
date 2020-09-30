/*
    Francisco Saavedra 

    Calculates a dogs age
*/

#include <stdio.h>

int main()
{
    int age;
    float dogAge;
    printf("How old are you? ");
    scanf("%d", &age);
    dogAge = (float)age / 7.0; //typecast, converts age to float
    printf("If you were a dog, you'd only be %.1f years old!", dogAge);
    return 0;
}