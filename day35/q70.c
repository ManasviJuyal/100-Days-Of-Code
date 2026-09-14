//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int size, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &pos);
    int ra[size];
    for(int i=0;i<size; i++)
    {
        if(i<pos)
        {
            ra[i]=arr[size-pos+i];
        }
        else
        {
            ra[i]=arr[i-pos];
        }
       
    }
     printf("The rotated array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ", ra[i]);
    }
}