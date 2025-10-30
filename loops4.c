//1. Check if a given number is a palindrome
/*#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" ,&num);
    int original= num ,reversed = 0 ,remainder;
  while (num != 0)
   {
    remainder = num % 10;
    reversed = reversed*10 + remainder;
    num = num/10;
   }
   if(original == reversed)
   {
    printf("The number is a palindrome number\n");
    return 0;
   } else
   {
    printf("The number is not a palindrome number\n");
    return 0;
}
}*/


//2. Reverse a given integer using a loop.
/*#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" ,&num);
    int original= num ,reversed = 0 ,remainder;
  while (num != 0)
   {
    remainder = num % 10;
    reversed = reversed*10 + remainder;
    num = num/10;
   }

   printf("The reverse of the number is: %d",reversed);

   return 0;
}*/


//3. Display the table of squares for the first n numbers. 
/*#include<stdio.h>

int main()
{
    int n,square;
    printf("Enter upto which number you want the sqaure table: ");
    scanf("%d",&n);

    printf("---The Sqaure Table---\n");
    for(int i=1; i<=n; i++){
         square = i*i;
        printf("%d\n",square);
    }
    return 0;
}*/


//4.Display the Fibonacci sequence for n terms. 
/*#include<stdio.h>

int main()
{
    int n,fibo;
    printf("Enter upto which number you want the sequence: ");
    scanf("%d",&n);

    int t1 = 0, t2 = 1, nextTerm;

    printf("---The Fibonacci Sequence---\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}*/