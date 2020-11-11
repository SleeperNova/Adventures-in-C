/*
    Francisco Saavedra 

    Get and Put Char Examples
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[] = "C is fun";
    for ( i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]);//outputs a single char
    }
    putchar('\n');//must do b/c putchar doesn't 

    int j;
    int msge[25];
    printf("\nType op to 25 characters then press Enter...\n");
    for ( j = 0; j < 25; j++)
    {
        msge[j] = getchar();//gets char at a time
        if (msge[j] == '\n')
        {
            j--;
            break;//quits if Enter is pressed
        }
        putchar('\n');//prints blank line
        for ( ; j >= 0; j--)
        {
            putchar(msge[j]);//prints char at a time
        }
        putchar('\n');
    }
    return 0;
}
