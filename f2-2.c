//2. Speed Limit Violation: The speed limit is 60 km/h. A car is traveling at 75 km/h. Determine if the car is exceeding the speed limit. 
#include<stdio.h>

int main()
{
    int limit = 75;

    printf("Exceeding: %d\n", limit > 60);

    return 0;
}