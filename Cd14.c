// Coin Acceptance: A parking meter accepts coins from 25 cents to $2 (25 to 200 cents). You inserted 15 cents. Verify if it's not acceptable. 
#include<stdio.h>

int main()
{
    int coins_inserted = 15;

    if(coins_inserted>=25 && coins_inserted<=200){
        printf("Coin accepted");
    }else{
        printf("Coin not accepted");
    }
    return 0;
}