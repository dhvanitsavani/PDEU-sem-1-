#include<stdio.h>
#include<conio.h>

void main(){
	int dollar, rs;
	clrscr();
	printf("enter amount in dollar = ");
	scanf("%d", &dollar);
	rs = dollar * 48;
	printf("amount in rs = %d", rs);
	getch();
}