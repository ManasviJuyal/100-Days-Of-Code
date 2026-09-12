//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int size,ele;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }   
    printf("Enter the element you want to delete: ");
    scanf("%d",&ele);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            break;
        }
    }
    printf("\nThe array after deletion is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}