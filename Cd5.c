//Temperature Range: The temperature is 35°C. Check if it's outside the comfortable range of 20°C to 30°C. 
#include<stdio.h>

int main()
{
    int temp=35;

    if(temp>=20 && temp<=30){
        printf("The temperature is perfect");
    }else{
        printf("It's too hot");
    }
    return 0;
}