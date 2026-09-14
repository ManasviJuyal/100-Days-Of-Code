//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main()
{ int r,c,sum=0;
printf("Enter the number of row and column:");
scanf("%d%d",&r,&c);
int m[r][c];
printf("Enter the elements of the matrix: ");
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        scanf("%d", &m[i][j]);
        sum+=m[i][j];
    }
}
printf("The matrix is:\n");
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%d ", m[i][j]);
    }
    printf("\n");
}
printf("The sum of all elements in the matrix is: %d", sum);
}