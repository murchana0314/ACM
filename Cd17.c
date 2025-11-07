//Adult Status: A person is 16 years old. The adult age is 18. Verify if they are not an adult.
#include<stdio.h>

int main()
{
    int age=16;

    if(age>=18){
        printf("Adult");
    }else{
        printf("Minor");
    }
    return 0;
}