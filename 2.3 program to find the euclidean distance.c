#include<stdio.h>
#include <Math.h>
int main()
{
int x1,x2,y1,y2;
printf("Enter the coordinate of first point:\n");
scanf("%d%d",&x1,&y1);
printf("Enter the coordinate of second point:\n");
scanf("%d%d",&x2,&y2);
double  distance=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
printf("the distance between two Euclidean points on plane is %.1f\n",distance);
return 0;
}