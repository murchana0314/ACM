//Write a C program to classify a number n as Small,Medium,or large using a ternary operator:
#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    (num >= 1 && num <= 10) ? printf("Small\n") :(num >= 11 && num <= 50) ? printf("Medium\n") :(num > 50) ? printf("Large\n") :printf("Invalid\n");

    return 0;
}