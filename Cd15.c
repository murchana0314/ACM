//Score Target: Two players scored 35 and 40 points respectively. Check if their combined score does not exceed 80 points.
#include<stdio.h>

int main()
{
    int player1_score=35,player2_score=40;

    if(player1_score + player2_score<=80){
        printf("It has not exceeded 80 points");
    }else{
        printf("It has exceeded 80 points");
    }
    return 0;
}