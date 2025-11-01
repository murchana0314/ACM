//1.: Solid Square, input n = 5
/*#include<stdio.h>

int main()
{
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

//2. Right-Angled Triangle, input: n = 5 
/*#include<stdio.h>

int main()
{
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


//3. Inverted Right-Angled Triangle, input n=5
/*#include<stdio.h>

int main()
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}*/


//4. Inverted Right-Angled Triangle (Right aligned)
/*#include<stdio.h>

int main()
{
    int i, j,gap;
    for (i = 5; i >= 1; i--) {
        for (gap=0; gap < 5-i; gap++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/