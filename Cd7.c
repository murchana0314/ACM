//. Weather Protection: It's raining (1) and you don't have an umbrella (0). Determine if you'll get wet (raining AND no umbrella).
#include<stdio.h>

int main()
{
    int raining=1,umbrella=0;

    if(raining==1 && umbrella==0){
        printf("You'll get wet");
    }else{
        printf("You won't get wet");
    }
    return 0;
}