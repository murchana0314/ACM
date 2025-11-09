//Write a C program to check whether a given number is even or odd using a ternary operator.
#include<stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d",&num);
    (num%2==0) ? printf("The number is even") : printf("The number is odd");

    return 0;
}