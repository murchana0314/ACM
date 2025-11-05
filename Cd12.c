// Discount Eligibility: A discount applies for purchases above $100. Purchase amount is $120. Determine if discount applies. 
#include<stdio.h>

int main()
{
    int purchase=120;

    if(purchase>100){
        printf("Eligible for discount");
    }else{
        printf("Not eligible for discount");
    }
    return 0;
}