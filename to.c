//1. Use the ternary operator to print if a number is even or odd. 
/*#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    (n%2==0)? printf("Even"):printf("Odd");
    return 0;
}*/


//2.Assign the maximum of two numbers using a ternary operator.
/*#include<stdio.h>

int main()
{
  int n1,n2;
  printf("Enter two number: ");
  scanf("%d %d",&n1,&n2);
  
  int max = (n1 > n2)? n1 : n2;
  printf("The maximum number is %d",max);
  return 0;
}*/


//3.Check eligibility to vote (age >=18) with a ternary operator. 
/*#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    (age >= 18)? printf("You are eligible to vote") : printf("You are not eligible to vote");
    return 0;
}*/


//4. Find and print the smallest of three numbers using nested ternary operators. 
/*#include<stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    int smallest = (n1<n2) ? ((n1<n3) ? n1 : n3) : ((n2<n3) ? n2 : n3);
    printf("The smallest number is: %d",smallest);
    return 0;
}*/


//5. Print whether a number is positive, negative, or zero using the ternary operator.
/*#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    (n > 0) ? printf("Positive") : (n < 0) ? printf("Negative") : printf("Zero");
    return 0; 
}*/