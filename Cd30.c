// Write a program to categorize a character.
#include<stdio.h>

int main()
{
    char character;

    printf("Enter any character on the keyboard: ");
    scanf("%c",&character);

    if(character >='0' && character <='9'){
        printf("This is a number");
    }else if(character >= 'A' && character <= 'Z'){
        printf("Uppercase letter");
    }else if(character >= 'a' && character <= 'z'){
        printf("Lowercase letter");
    }else{
        printf("Special character");
    }

    return 0;
}