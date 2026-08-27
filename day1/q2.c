//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
 float a,b ;
  printf("Enter first num : \n");
  scanf("%f",&a);
  printf("Enter second num : \n");
  scanf("%f",&b);
  printf("sum is : %f",a+b);
  printf("difference : %f",a-b);
  printf("product : %f",a*b);
  printf("quotient : %f",a/b);
  return 0;
}