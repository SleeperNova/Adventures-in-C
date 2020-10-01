/*
    Francisco Saavedra 

    Name AND operator w/ if else
*/

#include <stdio.h>

int main()
{
    char name[25];

    printf("What is your last name? ");
    scanf(" %s", name);
    //Uppercase first letter
    if((name[0] >= 'P') && (name[0] <= 'S'))//message is last name starts from P to S
    {
        printf("You must go to room 2432 ");
        printf("for you tickets.\n");
    }
    else 
    {
        printf("You can get your tickets here.\n"); //message for last name that does not start from P to S
    }
    return 0;
}