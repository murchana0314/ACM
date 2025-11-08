// Perfect Square: A number is 15. Check if it's not a perfect square (15 is not 4² or any integer squared).
#include<stdio.h>
#include<math.h>

int main()
{
  int num=15;

  if(sqrt(num)*sqrt(num) !=num){
    printf("The number is not a perfect square");
  }else{
    printf("The number is aperfect square");
  }
  return 0;
}