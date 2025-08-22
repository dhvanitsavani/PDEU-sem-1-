#include<stdio.h>
#include<conio.h>

void main(){
	float dollar, rs, pound;
	clrscr();
	printf("enter amount in dollar = ");
	scanf("%f", &dollar);
	rs = dollar * 48;
	pound = rs / 100;
	printf("amount in pound = %.2f", pound);
	getch();
}