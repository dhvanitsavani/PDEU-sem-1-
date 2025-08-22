#include<stdio.h>
#include<conio.h>

void main(){
	int l, area, per;
	clrscr();
	printf("enter value of l = ");
	scanf("%d", &l);
	area = l * l;
	per = 4 * l;
	printf("\nperimeter = %d", per);
	printf("\narea = %d", area);
	getch();
}