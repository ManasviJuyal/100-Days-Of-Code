//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the size of matrix:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix:\n");
    int a[r][c], a1[r][c];
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        scanf("%d", &a[i][j]);
      }
    }

    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        a1[j][i]=a[i][j];
      }
    }
    printf("The matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=a1[i][j])
            {
                printf("Not a Symmeytric Matrix");
                return 0;
            }   
        }
    }
    printf("Symmetric matrix");
    return 0;
}