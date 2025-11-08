// Write a program that takes three sides and determines the type of triangle. 
#include<stdio.h>

int main() {
    //To check if triangle is valid
    int a , b, c;
    printf("enter first side:");
    scanf("%d" ,&a);
    printf("enter second side:");
    scanf("%d" ,&b);
    printf("enter third side:");
    scanf("%d" ,&c);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    if(a + b > c && b + c > a && c + a > b) {
        printf("triangle is valid\n");
    } else {
        printf("triangle is invalid\n");
    }
     if(a==b && b==c){
        printf("It's an equilateral triangle\n");
     } else if (a == b || b == c || c == a){
        printf("It's an isosceles triangle\n");
     } else {
        printf("It's an scalene triangle\n");
     }
     if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        printf("It's a right angle triangle\n");
     }

    return 0;
}