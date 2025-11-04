// Student Qualification: A student has 70% attendance and 85 marks. Check if they qualify (attendance ≥ 75% AND marks ≥ 70). 
#include<stdio.h>

int main()
{
    int attend=70,marks=85;

    if(attend>=75 && marks>=70){
        printf("You qualify for the exam");
    }else{
        printf("You are not qualified for the exam");
    }
    return 0;
}