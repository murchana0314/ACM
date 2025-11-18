//Write a C program to find the maximum of two numbers using a ternary operator.
#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);

    int max = (num1>num2) ? printf("%d is the maximum of the two numbers",num1) : printf("%d is the maximum of the two numbers",num2);

    return 0;
}