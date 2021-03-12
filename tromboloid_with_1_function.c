//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>
int main()
{
    float h,d,b,v;
    printf("Enter Height of Tromboloid: ");
    scanf("%f", &h);
    printf("Enter Breadth of Tromboloid: ");
    scanf("%f", &b);
    printf("Enter Depth of Tromboloid: ");
    scanf("%f", &d);
    v = 0.333*(((h*d)+d))/b;
    printf("Volume of Tromboloid with Height(%.2f), Breadth(%.2f) and Depth(%.2f) is: %.3f",h,b,d,v);
    return 0;
}
