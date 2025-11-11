#include<stdio.h>
#include<math.h>

int prime( int a ) //To check whether the number is prime or not
{
    if(a % 2 == 0)
    {
        printf("The number is not prime\n");
        return 1;
    } else
    {
     printf("The number is prime\n");
     return 0;
    }
    
} 

int palindrome( int a ) //To check if a number is palindrome or not
{
  int original= a ,reversed = 0 ,remainder;
  while (a != 0)
   {
    remainder = a % 10;
    reversed = reversed*10 + remainder;
    a = a/10;
   }
   if(original == reversed)
   {
    printf("The number is a palindrome number\n");
    return 0;
   } else
   {
    printf("The number is not a palindrome number\n");
    return 1;
   }
} 

int main() 
{
    int num ,pp;
    printf("Enter a number : ");
    scanf("%d" ,&num);
    
    printf("What do you want to check:");
    scanf("%d",&pp);
    
    switch(pp)
    {
        case 1:
        prime(num);
        break;
        case 2:
        palindrome(num);
        break;
        default:
        printf("Invalid input");
    }
}