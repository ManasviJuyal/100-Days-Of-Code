//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() 
{
    int num,temp,digit, maxDigit = 0, maxCount = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    int arr[10] = {0}; // Array to store the count of each digit (0-9)
    while(temp>0)
    {
        digit = temp % 10;
        arr[digit]++;
        temp = temp / 10;
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>maxCount)
        {
            maxCount = arr[i];
            maxDigit = i;
        }
    }
    printf("The digit that occurs the most times is: %d", maxDigit);
    return 0;
}