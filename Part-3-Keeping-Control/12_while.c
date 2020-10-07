/*
    Francisco Saavedra
    
    Prints 0 to 20 and 1 to 21
*/

#include <stdio.h>

int main()
{
    int ctrl;
    ctrl = 0;
    while (ctrl <= 20)
    {
        printf("%d \n", ctrl);
        ctrl++;//0 to 20
    }
    printf("\n");
    ctrl = 1;
    do
    {
        printf("%d \n", ctrl);
        ctrl++;//1 to 21
    } 
    while (ctrl <= 21);
    return 0;
}