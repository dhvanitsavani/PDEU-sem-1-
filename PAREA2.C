#include<stdio.h>
#include<conio.h>

void main(){
	int l, b, area, per;
	clrscr();
	printf("enter value of l and b = ");
	scanf("%d %d", &l, &b);
	area = l * b;
	per = 2 * (l + b);
	printf("\nperimeter = %d", per);
	printf("\narea = %d", area);
	getch();
}