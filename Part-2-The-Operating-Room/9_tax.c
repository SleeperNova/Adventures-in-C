/*
    Francisco Saavedra

    Calculates tax
*/

#include <stdio.h>
#define MAXSAL 18000.00 //constant value

int main()
{
    float salary, taxAmt;
    float taxRate = 0.35;

    printf("How much did you earn last year? ");
    scanf(" %f", &salary);

    if (salary >= MAXSAL) //tax if greater or equal to 18000
    {
        taxAmt = salary * taxRate;
    }
    else // no tax if less than 18000
    {
        taxAmt = 0.0;
    }
    
    printf("Your tax is %.2f\n", taxAmt);
    return 0;
    
    
}