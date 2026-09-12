//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() 
{
    int size, pos, num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("\nEnter the element you want to insert: ");
    scanf("%d", &num);
    for(int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    printf("\nThe array after insertion is: ");
    for(int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
} 