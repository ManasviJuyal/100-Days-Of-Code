//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    int maxLength = 0;
    for (int i = 0; i < n; i++) 
    {
        int visited[256] = {0};
        for (int j = i; j < n; j++) 
        {
            if (visited[(unsigned char)s[j]]) 
            {
                break;
            }
            visited[(unsigned char)s[j]] = 1;
            if (j - i + 1 > maxLength)
            {
                maxLength = j - i + 1;
            }
        }
    }
    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}