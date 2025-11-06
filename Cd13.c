// Working Hours: Working hours are 9 AM to 5 PM (9 to 17 in 24-hour format). Current time is 18 (6 PM). Check if it's after working hours.
#include<stdio.h>

int main()
{
    int working_hour = 18;

    if(working_hour>=9 && working_hour<=17){
        printf("You are working during working hours");
    }else{
        printf("You are working after working hours");
    }
    return 0;
}