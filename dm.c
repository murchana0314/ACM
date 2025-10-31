//1.You need to design a program that decides whether a cup of coffee is drinkable or not, based on its temperature.
/*#include<stdio.h>

int main()
{
    int temp;
    printf("Enter the coffee temperature in Celsius: ");
    scanf("%d",&temp);

    if(temp >= 85){
        printf("Too hot to drink!");
    }else if(temp >= 60 && temp < 80){
        printf("Perfect to drink!");
    }else{
        printf("Needs reheating");
    }
    return 0;
}*/


//2.Write a program to identify which side of the book a given page belongs to. 
/*#include<stdio.h>

int main()
{
    int page_num;
    printf("Enter page no. of the book: ");
    scanf("%d",&page_num);

    if(page_num % 2 == 0){
        printf("Left page");
    } else{
        printf("Right page");
    }
    return 0;
}*/


//3. Write a program that gives hydration reminders based on the current time.
/*#include<stdio.h>

int main()
{
    int hr;
    printf("Enter the current time in hour in 24-hour format: ");
    scanf("%d",&hr);

    if(hr<=6 && hr>=10){
        printf("Morning hydration");
    }else if(hr>=11 && hr<=16){
        printf("Afternoon hydration");
    }else if(hr>=17 && hr<= 21){
        printf("Evening hydration");
    }else{
        printf("Time to rest");
    }
    return 0;
}*/