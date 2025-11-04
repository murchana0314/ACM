//Even Number: A number is 18. Verify if it's even (remainder when divided by 2 is 0).
#include<stdio.h>

int main()
{
    int num=18;

    if(num%2==0){
        printf("The number is even");
    }else{
        printf("The number is not even");
    }
    return 0;
}