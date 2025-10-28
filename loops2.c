//1. Find the factorial of a given number.
/*#include<stdio.h>

int main()
{
    int n,fac=1;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
         fac=fac*i;
    }
    printf("The factorial of %d is: %d",n,fac);
    return 0;
}*/


//2. Count the number of digits in a given number.
/*#include<stdio.h>

int main()
{
    int n,count=0;
    printf("Enter any postive number: ");
    scanf("%d",&n);
    
    if(n==0){
        count=1;
    }else{
        while(n!=0){
            n=n/10;
            count++;
        }
    }
    printf("The total digits in this number is: %d",count);
    return 0;
}*/


//3. Find the sum of digits of an integer.
/*#include<stdio.h>

int main()
{
    int num,sum=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);

   while(num!=0)
   {
    sum=sum + num%10;
    num= num/10;
   } 
   printf("The sum of the digits of the number is: %d",sum);
   return 0;
}*/


//4.Display all prime numbers between 1 and n. 
/*#include<stdio.h>
#include<math.h>

int main()
{
    int n,prime=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>1){
        for(int i=2; i<=sqrt(n); i++){
            if(n % i == 0){
                prime=0;
                break;
            }
        }
        if (prime == 1) {
            printf("The number is prime");
        } else {
            printf("The number is not prime");
        }
    } else {
        printf("The number is not prime");
    }

    return 0;
}*/