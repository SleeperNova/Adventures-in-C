/*
    Francisco Saavedra

    More String Example
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char city[15];
    char st[3];//one is for null zero
    char fullLocation[18] = "";//empty string goes here
    
    puts("What town do you live in? ");
    gets(city);
    puts("What state do you live in? (2-letter abbreviation)");
    gets(st);
    
    //concatenatesthe strings
    strcat(fullLocation, city);//add city
    strcat(fullLocation, ", ");//adds comma and space
    strcat(fullLocation, st);//adds state

    puts("\nYou live in ");
    puts(fullLocation);
    return 0;
}