//Voting Eligibility: The minimum age for voting is 18. A person is 17 years old. Verify if they are not eligible to vote.
#include<stdio.h>

int main()
{
    int age = 17;

    printf("You are not eligible: %d\n", age < 18);

    return 0;
}