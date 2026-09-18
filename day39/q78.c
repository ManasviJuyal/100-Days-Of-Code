//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
   int n,sum=0;
   printf("Enter the size of matrix: ");
   scanf("%d", &n);
   int a[n][n];
   printf("Enter the elements od the matrix:\n");
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
        scanf("%d", &a[i][j]);
     }
   }
   printf("The matrix is:\n");
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
        printf("%d ", a[i][j]);
     }
     printf("\n");
   }
   for(int i=0;i<n;i++)
   {
    sum+=a[i][i];
   }
   printf("The sum of diagonal matrix is: %d",sum);

}