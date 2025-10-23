//1. Input any character and display its ASCII value.
/*#include<stdio.h>

int main()
{
    char Ch;
    printf("Enter any character: ");
    scanf("%c",&Ch);
    printf("The ASCII value of '%c' is %d",Ch,Ch);
    return 0;
}*/

//2. Accept a number and print its absolute value (no abs() function).
/*#include<stdio.h>

int main()
{
    int n,N; // N is absolute value 
    printf("Enter any number: ");
    scanf("%d",&n);

    N = (n < 0) ? -n : n;

    printf("Absolute value: %d\n", N);
    return 0;
}*/

//3. Given two numbers, print the larger number using an if statement.
/*#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    if(n1 > n2)
    {
        printf("The larger number is %d",n1);
    }else
    {
        printf("The larger number is %d",n2);
    }
    return 0;
}*/
