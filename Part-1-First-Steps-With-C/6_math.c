/*
    Francisco Saavedra

    Net tire sales
*/

#include <stdio.h>

int main()
{
    int numTires;
    float tirePrice, beforeTax, netSale;
    float taxRate = 0.07;
    //user input
    printf("How many tires bought? ");
    scanf(" %d", &numTires);
    printf("How much is each tire? ");
    scanf(" %f", &tirePrice);
    //calculations
    beforeTax = tirePrice * numTires;
    netSale = beforeTax + (beforeTax * taxRate);
    printf("Your total sale is %.2f\n", netSale);
    return 0;
}