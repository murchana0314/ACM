/*Write a menu-driven C program to calculate the area of different shapes: 
1. Circle-pi*r*r, 2. Rectangle-length*breadth, 3. Triangle-0.5*base*height, 4. Square-side*side*/
#include<stdio.h>

int main()
{
    float r,l,b,base,h,side,area;
    int option;

    printf("MENU:\n");
    printf("1.Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("2. Area of Triangle\n");
    printf("2. Area of Square\n");
    printf("Enter your option: ");
    scanf("%d",&option);
    
    switch(option)
    {
        case 1:
        printf("Enter radius of circle: ");
        scanf("%f",&r);
        area = 3.14*r*r;
        printf("Area of circle: %2f",area);
        break;
        case 2:
        printf("Enter length and breadth of rectangle: ");
        scanf("%f %f",&l,&b);
        area = l*b;
        printf("Area of rectangle:%2f",area);
        break;
        case 3:
        printf("Enter base and height of triangle: ");
        scanf("%f %f",&base,&h);
        area = 0.5*base*h;
        printf("Area of triangle: %2f",area);
        break;
        case 4:
        printf("Enter side of square: ");
        scanf("%f",&side);
        area = side*side;
        printf("Area of square: %2f",area);
        break;
        default:
        printf("Invalid option");
    }
    return 0;
}