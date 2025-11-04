//Loan Eligibility: A person is 19 years old and earns $25,000 annually. Check if they don't qualify for a loan (age ≥ 21 AND income ≥ 30,000).
#include<stdio.h>

int main()
{
    int age=19,earnings=25000;

    if(age>=21 && earnings>=30000){
        printf("You can apply for loan");
    }else{
        printf("You can not apply for loan");
    }
    return 0;
}