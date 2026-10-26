//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
int main()
{
     int n, m;
     printf("Enter the size of the first array: ");
        scanf("%d", &n);
        int a1[n];
        printf("Enter the elements of the first array: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a1[i]);
        }
     printf("Enter the size of the second array: ");
        scanf("%d", &m);
        int a2[m];
        printf("Enter the elements of the second array: ");
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &a2[i]);
        }
        int merged[n + m];
        for(int i = 0; i < n; i++)
        {
            merged[i] = a1[i];
        }
        for(int i = 0; i < m; i++)
        {
            merged[n + i] = a2[i];
        }
        for(int i = 0; i < n + m - 1; i++)
        {
            for(int j = 0; j < n + m - i - 1; j++)
            {
                if(merged[j] > merged[j + 1])
                {
                    int temp = merged[j];
                    merged[j] = merged[j + 1];
                    merged[j + 1] = temp;
                }
            }
        }
        for(int i = 0; i < n + m; i++)
        {
            printf("%d ", merged[i]);
        }
        printf("\n");
    return 0;
}
