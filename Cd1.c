// Divisibility Test: A number is 24. Determine if it's divisible by both 3 and 4.
#include<stdio.h>

int main()
{
    int num = 24;
    
    if(num % 3 == 0 && num % 4 == 0){
        printf("Divisible by both 3 and 4");
    }else{
        printf("Not divisible by both");
    }
    return 0;
}