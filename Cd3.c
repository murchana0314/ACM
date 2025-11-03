// Right Triangle: A triangle has sides 3, 4, and 5. Verify if it's a right triangle using Pythagorean theorem (3² + 4² == 5²). 
#include<stdio.h>

int main()
{
    int s1=3,s2=4,s3=5;

    if(3*3+4*4==5*5){
        printf("It is a right triangle");
    }else{
        printf("It is not right triangle");
    }
    return 0;
}