//1. Check if a number is even or odd. 
/*#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number is even");
    }else{
        printf("The number is odd");
    }
    return 0;
}*/

//2. Input a year and check if it’s a leap year.
/*#include<stdio.h>

int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d",&year);
  if(year % 4 == 0){
    if(year % 100 != 0){
        printf("It is a leap year");
    }
  }else if(year % 400 == 0){
    printf("It is a leap year");
  }else{
    printf("It is not a leap year");
  }
  return 0;
}*/

//3. Read age and determine if the user is a minor, adult, or senior citizen. 
/*#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age < 18){
        printf("You are a minor");
    }else if(age >= 18 && age < 60){
        printf("You are an adult");
    }else{
        printf("You are a senior citizen");
    }
    return 0;
}*/

//4.Take three numbers and print the largest one (nested if-else). 
/*#include<stdio.h>

int main()
{
int n1, n2, n3;
    printf("Enter any three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 >= n2) {
        if(n1 >= n3) {
            printf("%d is the largest number", n1);
        } else {
            printf("%d is the largest number", n3);
        }
    } else {
        if(n2 >= n3) {
            printf("%d is the largest number", n2);
        } else {
            printf("%d is the largest number", n3);
        }
    }
    return 0;
}*/
    
//5.Determine if a character entered by the user is a vowel or consonant. 
/*#include<stdio.h>

int main()
{
    char Ch;
    printf("Enter a character: ");
    scanf("%c",&Ch);
    if(Ch >= 'a' && Ch <= 'z' || Ch >= 'A' && Ch <= 'Z'){
        if(Ch == 'a' || Ch == 'i' || Ch == 'o' || Ch == 'u' ||Ch == 'A' || Ch == 'I' || Ch == 'O' || Ch == 'U'){
            printf("It is a vowel");
        }else{
            printf("It is a consonant");
        }
    }else{
        printf("Invalide input.\nEnter valid input");
    }
    return 0;
}*/

//6.Calculate grade based on marks (>=90: A, >=75: B, >=60: C, else D).
/*#include<stdio.h>

int main()
{
    int mrks;
    printf("Enter the student's marks: ");
    scanf("%d",&mrks);
    if(mrks >= 90){
        printf("GRADE--A");
    }else if(mrks < 90 && mrks >= 75){
        printf("GRADE--B");
    }else if(mrks < 75 && mrks >= 60){
        printf("GRADE--C");
    }else{
        printf("GRADE--D");
    }
    return 0;
}*/

//7. Given a number, print “Positive”, “Negative”, or “Zero”.
/*#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 0){
        printf("Positive");
    } else if(num < 0){
        printf("Negative");
    }else{
        printf("Zero");
    }
    return 0;
}*/

//8.Input a month number and print the number of days in that month (use switch-case).
/*#include<stdio.h>

int main()
{
    int month;
    printf("Enter the month number: ");
    scanf("%d",&month);

    switch(month)
    {
     case 1:
     printf("January, 31 days");
     break;
     case 2:
     printf("February, 28 days");
     break;
     case 3:
     printf("March, 31 days");
     break;
     case 4:
     printf("April, 30 days");
     break;
     case 5:
     printf("May, 31 days");
     break;
     case 6:
     printf("June, 30 days");
     break;
     case 7:
     printf("July, 31 days");
     break;
     case 8:
     printf("August, 31 days");
     break;
     case 9:
     printf("September, 30 days");
     break;
     case 10:
     printf("October, 31 days");
     break;
     case 11:
     printf("November, 30 days");
     break;
     case 12:
     printf("December, 31 days");
     break;
     default:
     printf("it does not exist");
    }
    return 0;
}*/