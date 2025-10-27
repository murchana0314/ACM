//1. Print the first n natural numbers. 
/*#include<stdio.h>

int main()
{
    int n;
    printf("Enter any natural number: ");
    scanf("%d",&n);

    printf("The first %d natural numbers are: ",n);
    for(int i=1; i<=n; i++){
        printf("%d ",i);
    }
    return 0;
}*/


//2. Print the multiplication table of a number entered by the user. 
/*#include<stdio.h>

int main()
{
    int num ,i ,T;
    printf("Enter a number: ");
    scanf("%d" ,&num);
    int n;
    printf("upto which number : ");
    scanf("%d" ,&n);
    for(i = 1; i <= n; i = i +1)
    {
        T = num*i; //here T denotes the multiplication table of the number upto 10
        printf("%d\n" ,T);
    }
    return 0;
}*/


//3. Calculate the sum of numbers from 1 to n. 
/*#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter upto which number you want to find the sum of: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
         sum=sum+i;
    }
    printf("The sum of numbers from 1 to %d is: %d ",n,sum);
    return 0;
}*/


//4.  Print all even numbers between 1 and 100. 
/*#include<stdio.h>

int main()
{
    printf("All the even numbers from 1 to 100 are: \n");
    for(int i=2; i<=100; i=i+2){
        printf("%d\n",i);
    }
    return 0;
}*/