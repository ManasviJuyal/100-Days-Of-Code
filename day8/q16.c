// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a,&b,&c);
    largest=a;
    if(b>=largest && b>=c)
    {
        largest=b;
    }
    if(c>=largest && c>=b)
    {
        largest=c;
    }
    printf("Largest Number: %d", largest);
    return 0;   
}
