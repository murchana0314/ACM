//3. Movie Ticket Affordability: A movie ticket costs $12. You have $10. Check if you cannot afford the ticket.
#include<stdio.h>

int main()
{
    int cost = 10;

    printf("Cannot afford: %d\n",cost < 12);

    return 0;
}