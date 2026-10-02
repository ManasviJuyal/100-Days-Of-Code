//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++);
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    return 0;
}