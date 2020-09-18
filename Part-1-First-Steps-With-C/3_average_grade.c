/*
    Francisco Saavedra

    Returns average grade of three students
*/

#include <stdio.h>

int main()
{
    float gr1, gr2, gr3; //variable for grades
    float avg; //hold avg of the grades
    //asks for the students grades
    printf("What grade did the first student get?\n");
    scanf("%f", &gr1);
    printf("What grade did the second student get?\n");
    scanf("%f", &gr2);
    printf("What grade did the third student get?\n");
    scanf("%f", &gr3);
    //calculates the avg
    avg = (gr1 + gr2 + gr3) / 3.0;
    printf("\nThe student average is %.2f", avg);
    return 0;
}