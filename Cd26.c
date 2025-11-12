//Write a C program to perform addition,subtraction,multiplication,division,or modulus using switch.
#include<stdio.h>

int main()
{
    int n1,n2,options;
    printf("Enter any two integers: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter what operation you want to apply(from 1-5, that is,+,-,*,/,%): ");
    scanf("%d",&options);

    switch(options)
    {
        case 1:
        printf("The addition of the two integers is: %d\n ",n1+n2);
        break;
        case 2:
        printf("The difference of the two integers is: %d\n ",n1+n2);
         break;
        case 3:
        printf("The product of the two integers is: %d\n ",n1*n2);
         break;
        case 4:
        printf("The division of the two integers is: %d\n ",n1/n2);
         break;
        case 5:
        printf("The modulus of the two integers is: %d\n ",n1%n2);
         break;
        default:
        printf("Invalid input");

    }
    return 0;
}