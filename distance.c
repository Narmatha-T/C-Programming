//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input(char i, int n)  
{
	float c;
	printf("Enter the %c coordinate of point %d: ",i,n);
	scanf("%f",&c);
  return c;
}
float distance(float x1, float x2, float y1, float y2)  
{
	float x;
	x = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	return x;
}
void output(float x1, float x2, float y1, float y2, float dist) 
{
	printf("The distance between point1(%.2f, %.2f) and point2(%.2f,%.2f) is: %.2f\n", x1,y1,x2,y2,dist);
}
int main()  
{
	float x1,x2,y1,y2,dist;
	x1=input('x',1);
	y1=input('y',1);
	x2=input('x',2);
	y2=input('y',2);
	dist=distance(x1,x2,y1,y2);
	output(x1,x2,y1,y2,dist);
	return 0;
}
