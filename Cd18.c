//Budget Exceeded: Your budget is $500. You spent $600. Check if you exceeded your budget.
#include<stdio.h>

int main()
{
    int spent=500;

    if(spent<=600){
        printf("You have spent under your budget");
    }else{
        printf("You have exceeded Your budget");
    }
    return 0;
}