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
    int num, sum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    
    while(temp!=0)
    {
        int r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    if(sum==num)
    {
        printf("Armstrong number\n");
    }
    else 
    {
        printf("Not an Armstrong number\n");
    }
    return 0;
}