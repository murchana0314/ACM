// Elevator Safety: An elevator capacity is 800kg. Current load is 850kg. Check if it's overloaded (exceeds capacity). 
#include<stdio.h>

int main()
{
    int load=850;

    if(load>800){
        printf("Overload\nNot safe");
    }else{
        printf("Safe");
    }
    return 0;
}