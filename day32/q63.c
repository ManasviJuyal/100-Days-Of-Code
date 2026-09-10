//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
 { 
    int n1,n2;
    printf("Enter the size of first array: ");
    scanf("%d",&n1);    
   int arr1[n1];
    printf("Enter the elements of first array: ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of second array: ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int arr[n1+n2];
    for(int i=0;i<n1;i++)
    {
        arr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr[n1+i]=arr2[i];
    }
    printf("The Merged array is: ");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}