//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i, j, isRotation = 0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while (str1[len1] != '\0')
        len1++;
    while (str2[len2] != '\0')
        len2++;
    if (len1 != len2)
    {
        printf("Not rotation\n");
        return 0;
    }
    for (i = 0; i < len1; i++)
    {
        isRotation = 1;
        for (j = 0; j < len1; j++)
        {
            if (str1[j] != str2[(i + j) % len1])
            {
                isRotation = 0;
                break;
            }
        }
        if (isRotation)
            break;
    }
    if (isRotation)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}