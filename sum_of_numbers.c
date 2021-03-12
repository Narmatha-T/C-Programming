//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>

int input_n()
{
    int n;
    printf("Enter amount of different numbers you wish to enter:\n ");
    scanf("%d",&n);
    return n;
}

int input_numbers(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&a[i]);
    }
}

int compute_sum(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
}

int display_output(int n, int a[n], int sum)
{
    int i;
    for(i=1; i<n; i++)
    {
       printf("%d + ",a[i-1]); 
    }
    printf("%d = %d",a[i-1],sum);
}

int main()
{
    int n,sum;
    n=input_n();
    int a[n];
    input_numbers(n,a);
    sum=compute_sum(n,a);
    display_output(n,a,sum);
    return 0;
}
