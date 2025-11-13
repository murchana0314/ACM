//write a C program to check if a customer is eligible for a discount.
#include<stdio.h>

int main()
{
    int purchase_amount;

    printf("Enter the purchase amount: ");
    scanf("%d",&purchase_amount);

    if(purchase_amount > 1000)
    {
        printf("Eligible for discount");
    }else{
        printf("Not eligible");
    }

    return 0;
}