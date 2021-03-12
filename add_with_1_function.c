//Write a program to add two user input numbers using one function.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter number:");
    scanf("%d",&a);
    printf("Enter number:");
    scanf("%d",&b);
    printf("Sum of %d and %d is: %d", a,b,a+b);
    return 0;
}
