// write a C program to determine the position of a given coordinate point. 
#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the values of x and y: ");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0){
        printf("The point lies in the First quadrant");
    }else if(x<0 && y>0){
        printf("The point lies in the Second quadrant");
    }else if(x<0 && y<0){
        printf("The ponit lies in the Third quadrant");
    }else if(x>0 && y<0){
        printf("The point lies in the Fourth quadrant");
    }else if(x==0 || y==0){
        printf("The point lies on an axis");
    }

    return 0;
}