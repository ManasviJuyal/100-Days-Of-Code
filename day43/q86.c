//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Not palindrome\n");
    else
        printf("Palindrome\n");
    return 0;
}