//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main() 
{
    int num1,num2;
    int choice;
    float result;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);

    printf("Enter the operator:\n 1 for +\n 2 for -\n 3 for *\n 4 for /\n 5 for modulus \n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            result=num1+num2;
            printf("Result: %.2f",result);
            break;
        case 2:
            result=num1-num2;
            printf("Result: %.2f",result);
            break;
        case 3:
            result=num1*num2;
            printf("Result: %.2f",result);
            break;
        case 4:
            if(num2!=0)
            {
                result=(float)num1/num2;
                printf("Result: %.2f",result);
            }
            else
                printf("Error! Division by zero.");
            break;
        case 5:
            if(num2!=0)
            {
                result=num1%num2;
                printf("Result: %.2f",result);
            }
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
