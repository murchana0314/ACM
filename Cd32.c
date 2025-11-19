//Write a C program to check if a customer is eligible for a discount. 
#include<stdio.h>

int main()
{
    int amount;

    printf("Enter the purchase amount: ");
    scanf("%d",&amount);

    if(amount>1000){
        printf("Eligible for discount");
    }else{
        printf("Not eligible");
    }

    return 0;
}