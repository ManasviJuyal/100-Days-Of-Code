//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char date[11];
    printf("Enter the date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';
    char month[4] = "Apr";
    char formattedDate[12];
    snprintf(formattedDate, sizeof(formattedDate), "%c%c-%s-%c%c%c%c", date[0], date[1], month, date[6], date[7], date[8], date[9]);
    printf("Formatted Date: %s\n", formattedDate);
    return 0;
}