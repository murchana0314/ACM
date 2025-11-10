//Write a C program to find the maximum of two numbers using a ternary operator.
#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    int max_number = (num1 > num2) ? num1 : num2;

    printf("The maximum of the two numbers is: %d",max_number);

    return 0;
}