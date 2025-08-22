#include<stdio.h>
#include<conio.h>

void main(){
	float dollar, rs;
	clrscr();
	printf("enter amount in rs = ");
	scanf("%f", &rs);
	dollar = rs / 48;
	printf("amount in dollar = %.2f", dollar);
	getch();
}