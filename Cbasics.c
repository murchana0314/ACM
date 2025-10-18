//1. To print Hello Wold

/*#include<stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}*/



//2. Print a message: “Hello, [Name]!”

/*#include<stdio.h>

int main() {
    char name[30];
    printf("Enter your name :");
    scanf("%s" ,name);
    printf("Hello %s\n" ,name);
    return 0;
}*/


//3. Take two integers from user input and display their sum

/*#include<stdio.h>

int main() {
    int num1 ,num2;
    printf("Enter one number :");
    scanf("%d" ,&num1);
    printf("Enter another number :");
    scanf("%d" ,&num2);

    int sum;
    sum = num1 + num2;
    printf("The sum of the two integers is %d" ,sum);
    return 0;
}*/


//4. Input two floating-point numbers and print their product

/*#include<stdio.h>

int main() {
    float num1 ,num2;
    printf("Enter one number :");
    scanf("%f" ,&num1);
    printf("Enter another number :");
    scanf("%f" ,&num2);

    float prod;
    prod = num1*num2;
    printf("The product these two numbers is %f" ,prod);
    return 0;

}*/


//5. Read the radius of a circle and print its area (use π = 3.14)

/*#include<stdio.h>

int main() {
    float r;
    printf("Enter the radius :");
    scanf("%f" ,&r);
    
    float pie = 3.14;
    float area = pie*r*r;
    printf("The area of the circle is %f" ,area);
    return 0;

}*/


//6. Take the length and width of a rectangle and print its perimeter

/*#include<stdio.h>

int main() {
    int l ,b;
    printf("Enter the length of rectangle :");
    scanf("%d" ,&l);
    printf("Enter the breadth of rectangle :");
    scanf("%d" ,&b);

    int per = 2*(l*b);
    printf("The perimeter of the rectangle is %d" ,per);
    return 0;
}*/


//7. Swap the values of two variables entered by the user

/*#include<stdio.h>

int main() {
    int a ,b ,c;
    printf("First number a before the swap is :");
    scanf("%d" ,&a);
    printf("Second number b before the swap is :");
    scanf("%d" ,&b);
     
    c = a;
    a = b;
    b = c;
    printf("The values of two variable after the swap is \n a = %d\n b = %d" ,a ,b);
    return 0;
}*/


//8. Convert temperature from Celsius to Fahrenheit

/*#include<stdio.h>

int main() {
    float c;
    printf("Enter temperature in celsius :");
    scanf("%f" ,&c);

    float fh = (c*(9.0/5.0)) + 32.0;
    printf("The temperature in fahrenheight is %f" ,fh);
    return 0;
}*/


//9. Calculate and display a student’s average marks of five subjects

/*#include<stdio.h>

int main() {
    float eng ,maths ,phy ,chem ,IT;
    printf("The student got out of 20 in english :");
     scanf("%f" ,&eng);
    printf("The student got out of 20 in mathematics :");
     scanf("%f" ,&maths);
    printf("The student got out of 20 in physics :");
     scanf("%f" ,&phy);
    printf("The student got out of 20 in chemistry :");
     scanf("%f" ,&chem);
    printf("The student got out of 20 in Information Technology :");
     scanf("%f" ,&IT);
   
    float avg;
    avg = (eng + maths + phy + chem + IT)/5;
    printf("The student's average marks of five subjects is %f" ,avg);
    return 0;
}*/


//10. Read a distance in kilometers and print its equivalent in meters, centimeters ,millimeters

/*#include<stdio.h>

int main() {
    float D;
    printf("Enter the distance in kilometers :");
    scanf("%f" ,&D);
    float m ,cm ,mm;
    m = D*1000;
    printf("The distance in meters is %f\n" ,m);
    cm = D*1000000;
     printf("The distance in centimeters is %f\n" ,cm);
    mm = D*1000000000;
     printf("The distance in millimeters is %f\n" ,mm);
    return 0;
}*/
