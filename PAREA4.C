#include<stdio.h>
#include<conio.h>

void main(){
	int h, b, area, per;
	clrscr();
	printf("enter value of h and b = ");
	scanf("%d %d", &h, &b);
	area = 0.5 * h * b;
	printf("\narea = %d", area);
	getch();
}