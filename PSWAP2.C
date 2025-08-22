#include<stdio.h>
#include<conio.h>

void main(){
	int a, b;
	clrscr();
	printf("enter a and b = ");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\na = %d\nb = %d", a, b);
	getch();
}