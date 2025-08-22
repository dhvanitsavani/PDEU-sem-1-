#include<stdio.h>
#include<conio.h>

void main(){
	int a, b;
	clrscr();
	printf("enter two numbers : ");
	scanf("%d %d", &a, &b);
	printf("\nsum = %d", a + b);
	printf("\nsubstraction = %d", a - b);
	printf("\nmultiplication = %d", a * b);
	printf("\ndivision = %d", a / b);
	getch();
}