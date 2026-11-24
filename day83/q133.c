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
    JAN = 1, FEB, MAR, APR, MAY, JUN,JUL, AUG, SEP, OCT, NOV, DEC
};
int main()
{
    enum Months month;
    char input[10];
    printf("Enter month (JAN-DEC): ");
    scanf("%9s", input);
    switch (input[0])
    {
        case 'J':
            if (input[1] == 'A')
                month = JAN;
            else if (input[1] == 'U' && input[2] == 'N')
                month = JUN;
            else
                month = JUL;
            break;
        case 'F': month = FEB; 
        break;
        case 'M':
            if (input[2] == 'R')
                month = MAR;
            else
                month = MAY;
            break;
        case 'A':
            if (input[1] == 'P')
                month = APR;
            else
                month = AUG;
            break;
        case 'S': month = SEP; 
        break;
        case 'O': month = OCT; 
        break;
        case 'N': month = NOV;
         break;
        case 'D': month = DEC; 
        break;
        default:
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