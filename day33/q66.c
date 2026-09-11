//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
    int size,num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    int a[size+1];
    for(int i=0;i<=size;i++)
    {
        if(i<size && arr[i]<num)
        {
            a[i]=arr[i];
        }
        else if(i==size || arr[i]>=num)
        {
            a[i]=num;
            for(int j=i;j<size;j++)
            {
                a[j+1]=arr[j];
            }
            break;
        }
    }
    printf("The edited array is:\n");
    for(int i=0;i<=size;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}