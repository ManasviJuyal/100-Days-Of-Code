//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main()
{
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}