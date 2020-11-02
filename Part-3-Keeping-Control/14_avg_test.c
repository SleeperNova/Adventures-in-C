/*
    Francisco Saavedra

    Average test scores
*/

#include <stdio.h>

int main ()
{
    int numTest;
    float stTest, avg, total = 0.0;
    //ask for 25 student test scores
    for (numTest = 0; numTest < 25; numTest++)
    {
        printf("What is the next student test score? ");
        scanf(" %f", &stTest);

        if (stTest < 0.0)
        {
            break; //if negative number is entered, program ends w/ current avg
        }
        total += stTest;
    }
    avg = total / numTest;
    printf("\nThe average is %.f%%.\n", avg);
    return 0;
}