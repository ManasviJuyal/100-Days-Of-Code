//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    int num,p=1,c=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        int r=num%10;
        if(r%2 !=0)
        {
            p*=r;
            c++;
        }
        num/=10;
    }
    if(p==1 && c==0)
    {
        printf("%d(No odd digits)\n",p);
    }
    else
    {
        printf("%d\n", p);          
    }
    return 0;
}