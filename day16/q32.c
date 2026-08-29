//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp=num;
    while(temp!=0)
    {
        int r=temp%10;
        rev=rev*10+r;
        temp/=10;
    }
    if(rev==num)
    {
        printf("Palindrome number\n");
    }
    else 
    {
        printf("Not a Palindrome number\n");
    }
    return 0;
}