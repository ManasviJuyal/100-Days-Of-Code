//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
 {
    int r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The diagonal traversal of the matrix is:\n ");
    for (int d = 0; d < r + c - 1; d++)
     {
        for (int i = 0; i < r; i++) 
        {
            int j = d - i;

            if (j >= 0 && j < c) {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}