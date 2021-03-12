//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    return a;
}

int add(int a, int b)
{
    return a + b;
}

void output(int a, int b,int s)
{
    printf("%d + %d = %d\n",a,b,s);
}
int main()
{
    int x,y,sum;
    x=input();
    y=input();
    sum= add(x,y);
    output(x,y,sum);
    return 0;
}
