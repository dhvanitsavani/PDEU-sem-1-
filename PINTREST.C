#include<stdio.h>
#include<conio.h>

void main(){
	float i, p, n, r;
	clrscr();
	printf("enter P R N : ");
	scanf("%f %f %f", &p, &r, &n);
	i = p * r * n / 100;
	printf("I = %.2f", i);
	getch();
}