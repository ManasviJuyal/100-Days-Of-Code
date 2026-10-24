//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0, x = -1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum1 += i; // Calculate the total sum from 1 to n
    }

    for (int i = 1; i <= n; i++)
    {
        sum2 += i; // Calculate the sum from 1 to x
        if (sum2 == (sum1 - sum2 + i)) // Check if the pivot condition is met
        {
            x = i;
            break;
        }
    }

    printf("%d\n", x);
    return 0;
}