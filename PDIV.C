#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, div;
	clrscr();
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	div = a / b;
	printf("division = %d", div);
	getch();
}