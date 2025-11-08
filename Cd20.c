//Weekend Day: Today is day 3 (Wednesday). Check if it's not a weekend day (day 6 or 7).
#include<stdio.h>

int main()
{
    int day=3;

    if(day>=1 && day<=7 && day !=6 && day!= 7){
    printf("It is a weekday");
    }else{
        printf("It is the weekend");
    }
    return 0;
}