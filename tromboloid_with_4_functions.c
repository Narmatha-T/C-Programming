//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input(char *c)
{
    float x;
    printf("Enter %s of Tromboloid: ",c);
    scanf("%f", &x);
    return x;
}
float Volume(float h,float d ,float b)
{
    return 0.333*(((h*d)+d))/b;;
}
void output(float h,float d ,float b, float v)
{
   printf("Volume of Tromboloid with Height(%.2f), Breadth(%.2f) and Depth(%.2f) is: %.3f",h,b,d,v);
}

int main()
{
    float h,b,d,v;
    h=input("Height");
    b=input("Breadth");
    d=input("Depth");
    v=Volume(h,d,b);
    output(h,b,d,v);
    return 0;
}
