//Given three numbers a, b, c, find the maximum if the sum of all three is even, otherwise find the minimum. 
#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;

    int result = (sum % 2 == 0) ? ((num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3)) : ((num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3)); 

    printf("%d\n", result);
    return 0;

}