#include<stdio.h>
#include<conio.h>

void main(){
    int n, i, digit;
    clrscr();
    printf("enter number : ");
    scanf("%d", &n);
    printf("separated digits : ");

    while(n > 0){
        digit = n % 10;
        printf("%d,", digit);
        n /= 10;
    }

    getch();
}
