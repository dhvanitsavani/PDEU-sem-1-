#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, subs;
	clrscr();
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	subs = a - b;
	printf("substraction = %d", subs);
	getch();
}