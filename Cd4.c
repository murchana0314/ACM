// Leap Year: A year is 2023. Determine if it's not a leap year (not divisible by 4).
#include<stdio.h>

int main()
{
    int year=2023;
    
    if(year%4==0){
        printf("It is a leap year");
    }else{
        printf("It is not a leap year");
    }
    return 0;
}