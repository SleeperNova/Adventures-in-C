/*
    Francisco Saavedra

    Switch Case Example
*/

#include <stdio.h>

int main()
{
    char choice;

    printf("Are you filing a single, joint, or ");
    printf("married return (s, m, j)? ");

    do
    {
        scanf(" %c", &choice);
        switch (choice) 
        {
            case ('s'): printf("You get $1,000 deduction.\n");
                        break;
            case ('j'): printf("You get $3,000 deduction.\n");
                        break;
            case ('m'): printf("You get $5,000 deduction.\n");
                        break;
            default   : printf("I don't know the ");
                        printf("option %c.\n", choice);
                        printf("Try again.\n"); 
                        break;
        }
    } while ((choice != 's') && (choice != 'j') && (choice != 'm'));
    return 0;
}