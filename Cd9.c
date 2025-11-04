//Shop Status: A shop is open on weekdays (day 1-5) but closed on weekends. Today is day 7. Check if the shop is closed. 
#include<stdio.h>

int main()
{
    int day=7;

    if(day>=1 && day<=5){
        printf("The shop is open");
    }else{
        printf("The shop is closed");
    }
    return 0;
}