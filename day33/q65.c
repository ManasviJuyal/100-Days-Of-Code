//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int size, num, low, high, mid;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &num);
    low = 0;
    high = size - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == num)
        {
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Number not found\n");
    return 0;
}