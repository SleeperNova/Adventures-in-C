/*
    Francisco Saavedra 

    sizeof() example
*/

#include <stdio.h>

int main()
{
    int age, intSize;
    float gift;
    printf("\nHow old are you? ");
    scanf(" %d", &age);
    /*if (age < 18)
    {
        gift = 5.00;
    }
    else
    {
        gift = 10.00;
    }*/
    gift = (age < 18) ? 5.00 : 10.00; //same as the if statement

    printf("Your gift is %.2f\n", gift);
    age++;//adds 1 to age variable
    printf("In a year, you'll be %d years old.\n", age);
    intSize = sizeof(int);
    printf("Intergers take %d memory locations.", intSize);
    return 0;
}