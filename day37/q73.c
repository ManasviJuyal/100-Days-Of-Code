//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int m[r][c], sum[r];
    printf("enter the elements of the matrix:\n");
    for(int  i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<r;i++)
    {
        sum[i] = 0;
        for(int j=0;j<c;j++)
        {
            printf("%d", m[i][j]);
            sum[i] += m[i][j];
        }
        printf("\n");
    }
    printf("The sum of each row is:\n");
    for(int i=0;i<r;i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
}