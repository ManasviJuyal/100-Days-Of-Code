//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main()
{
    int r1,c1,c2,r2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
    if(r1==r2 && c1==c2)
    {
       int a[r1][c1], b[r2][c2], sum[r1][c1];
       printf("Enter the elements of first matrix: ");
         for(int i=0;i<r1;i++)
         {
              for(int j=0;j<c1;j++)
              {
                scanf("%d",&a[i][j]);
              }
         }
         printf("Enter the elements of second matrix: ");
            for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("The sum of the two matrices is:\n");
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    sum[i][j]=a[i][j]+b[i][j];
                    printf("%d ",sum[i][j]);
                }
                printf("\n");
            }
    }
    else 
    {
        printf("Matrix addition is not possible");
    }
    return 0;
}