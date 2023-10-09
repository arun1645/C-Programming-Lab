#include <stdio.h>
int main()
{
    float radius;
    float side;
    float length,breadth;

    //circle
    printf("finding the area and perimeter of circle\n");
    printf("enter the radius of circle\n");
    scanf("%f",&radius);

    printf("area of circle is %.2f\n",3.14*radius*radius);
    printf("perimeter of circle is%.2f\n",2*3.14*radius);
    
 //square
 printf("finding the area and perimeter of square\n");
    printf("enter the side of square\n");
    scanf("%f",&side);

    printf("area of square is %.2f\n",side*side);
    printf("perimeter of square is%.2f\n",4*side);

    //rectangle
     printf("finding the area and perimeter of rectangle\n");
    printf("enter the length and breadth of rectangle\n");
    scanf("%f%f",&length ,&breadth);

    printf("area of rectangle is %.2f\n",length*breadth);
    printf("perimeter of rectangle is%.2f\n",2*(length*breadth));
    return 0;
}