//1.Check whether an integer is positive, negative, or zero.
/*#include<stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("The number is positive");
    }else if(num < 0){
        printf("The number is negative");
    }else{
        printf("The number is zero");
    }

    return 0;
}*/

//2. Print the value of an expression using all basic arithmetic operators.
/*#include<stdio.h>

int main()
{
    int n1,n2,val;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    val = (n1-n2)/(n1+n2)*(n1%n2);
    printf("The value of the expression is: %d",val);
    return 0;
}*/

//3. Find the result of a logical AND and OR operation using two boolean variables.
/*#include <stdio.h>
#include <stdbool.h>

int main() 
{
    bool name = true;
    bool SAP_ID = false;

    if (name && SAP_ID) 
    {
        printf("You have successfully loged in\n");
    } else if (name || SAP_ID ) 
    {
        printf("Partial match. Please check your credentials.\n");
    } else 
    {
        printf("Login failed.\nPlease enter correct credentials\n");
    }

    return 0;

}*/