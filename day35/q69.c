// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{
    int size, num, l, sl;
    printf("Enter the size of the array: ");
    scanf("%d", &size); 
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    l=arr[0];
    sl=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]!=l)
        {
            sl=arr[i];
        }
    }
    printf("The second largest element is: %d", sl);
    return 0;
}