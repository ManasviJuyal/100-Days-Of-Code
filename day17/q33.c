// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main()
{
    int num, sum = 0, temp, digitCount = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    if (temp == 0)
        digitCount = 1;
    else
    {
        while (temp != 0)
        {
            digitCount++;
            temp /= 10;
        }
    }

    temp = num;

    while (temp != 0)
    {
        int r = temp % 10;
        int power = 1;
        for (int i = 1; i <= digitCount; i++)
        {
            power *= r;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == num)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}