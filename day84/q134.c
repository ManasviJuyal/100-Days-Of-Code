//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
enum Months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN,  JUL, AUG, SEP, OCT, NOV, DEC
};
int main()
{
    enum Months month;
    char input[10];
    printf("Enter month: ");
    scanf("%9s", input);

    if (input[0] == 'J')
    {
        if (input[1] == 'A')
            month = JAN;
        else if (input[2] == 'N')
            month = JUN;
        else
            month = JUL;
    }
    else if (input[0] == 'F')
        month = FEB;
    else if (input[0] == 'M')
    {
        if (input[2] == 'R')
            month = MAR;
        else
            month = MAY;
    }
    else if (input[0] == 'A')
    {
        if (input[1] == 'P')
            month = APR;
        else
            month = AUG;
    }
    else if (input[0] == 'S')
        month = SEP;
    else if (input[0] == 'O')
        month = OCT;
    else if (input[0] == 'N')
        month = NOV;
    else if (input[0] == 'D')
        month = DEC;
    else
    {
        printf("Invalid month!");
        return 0;
    }
    switch (month)
    {
        case FEB:
            printf("28 or 29 days");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;
        default:
            printf("31 days");
    }
    return 0;
}