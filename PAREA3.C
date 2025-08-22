#include<stdio.h>
#include<conio.h>

void main(){
	float r, area, per;
	clrscr();
	printf("enter value of r = ");
	scanf("%f", &r);
	area = 3.14 * r * r;
	per = 2 * 3.14 * r;
	printf("\nperimeter = %.2f", per);
	printf("\narea = %.2f", area);
	getch();
}