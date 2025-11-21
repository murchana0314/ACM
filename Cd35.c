//Write a C program to Classify temperature in °C using a ternary operator:
#include<stdio.h>

int main()
{
   int temp;
   printf("Enter temperature in degree Celsius: ");
   scanf("%d",&temp);
   
   int comfort_level = (temp < 0) ? printf("Freezing") :(temp <= 15) ? printf("Cold") :(temp <= 30) ?printf("Comfortable") :(temp <= 45) ? printf("Hot") : printf("Extremely Hot");

   return 0;

}