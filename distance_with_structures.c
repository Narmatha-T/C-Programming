//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct point
{
    float x;
    float y;
};
typedef struct point Point;

Point input(int a)
{
    Point p;
    printf("Enter x coordinate of point %d:",a);
    scanf("%f",&p.x);
    printf("Enter y coordinate of point %d:",a);
    scanf("%f",&p.y);
    return p;
}
float compute(Point p1,Point p2)
{
    float distance;
    distance=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return distance;
}
void output(Point p1, Point p2, float dist)
{
    printf("The distance between point1(%.2f,%.2f) and point2(%.2f,%.2f) is %.3f",p1.x,p1.y,p2.x,p2.y,dist);
}
int main()
{
    float dist;
    Point p1,p2;
    p1=input(1);
    p2=input(2);
    dist=compute(p1,p2);
    output(p1,p2,dist);
    return 0;
}
