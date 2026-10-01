//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], reversed[100];
    int i, j, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            start = i;
            while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
                i++;
            end = i - 1;

            for (j = end; j >= start; j--)
                putchar(str[j]);
        }
        else
        {
            putchar(str[i]);
            i++;
        }
    }
    return 0;
}