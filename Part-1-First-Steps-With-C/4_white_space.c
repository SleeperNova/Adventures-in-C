/*
    Francisco Saavedra

    Example of white space
*/

#include <stdio.h>

/*
#include <stdio.h>
int main(){ float s, t; printf("How much do you make? "); scanf(" %f", &s);
t = .33 * s; printf("You owe %.2f in taxes.", t); return 0;}
*/

int main()
{
    float s, t;

    printf("How much do you make? ");
    scanf(" %f", &s);

    t = .33 * s;
    printf("You owe %.2f in taxes.", t);
    return 0;
}