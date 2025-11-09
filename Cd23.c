//Write a C program to check whether a number is a single-digit number or not using a ternary operator.
#include<stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d",&num);
    (num>=0 && num<=9) ? printf("It is a single-digit number") : printf("It is not a single digit number");
    return 0;
}