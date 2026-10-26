//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
   for(int i=0;i,n;i++)
   {
        int found = 0;
        for(int j=0;j<n;j++)
        {
            if(nums[j] == i)
            {
                found = 1;
                break;
            }
        }
        if(found!=1)
        {
            printf("Missing number: %d\n", i);
            return 0;
        }
   }
    return 0;
}