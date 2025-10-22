//1.Take any two numbers and dispaly the result of a;; arithmetic operations(+,-,*,/,%)

/*#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);
    int add=num1+num2;
    printf("The Addition of the two numbers is:%d\n",add);
    int sub=num1-num2;
    printf("The Subtraction of the two numbers is:%d\n",sub);
    int prod=num1*num2;
    printf("The Multiplication of the two numbers is:%d\n",prod);
    float divide=num1/num2;
    printf("The Division of the two numbers is:%2f\n",divide);
    int mod=num1%num2;
    printf("The Remainder of the two numbers is:%d",mod);
    return 0;
}*/

//2.Input a number and print its square and cube.

/*#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int sq=num*num;
    printf("The square of this number is: %d\n",sq);
    int cube=num*num*num;
    printf("The cube of this number is: %d",cube);
    return 0;
}*/

//3. Read the sides of a triangle and calculate its area.

/*#include<stdio.h>
#include<math.h>

int main()
{
    int s1,s2,s3;
    printf("Enter all the three side of the triangle: ");
    scanf("%d %d %d",&s1,&s2,&s3);
    int s=(s1+s2+s3)/2; //Semiperimeter of triangle needed to calculate area 
    printf("Semiperimeter of triangle is %d\n",s);
    int area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("The area of the triangle is: %d",area);
    return 0;
}*/

//4. Find the remainder of dividing one integer by another.

/*#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int rm=num1%num2;
    printf("The remainder is: %d",rm);
    return 0;
}*/