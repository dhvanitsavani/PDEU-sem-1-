#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, multi;
	clrscr();
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	multi = a * b;
	printf("multiplication = %d", multi);
	getch();
}