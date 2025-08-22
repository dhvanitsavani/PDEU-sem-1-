#include<stdio.h>
#include<conio.h>

void main(){
	float hour, min;
	clrscr();
	printf("enter time in minutes = ");
	scanf("%f", &min);
	hour = min / 60;
	printf("time in hours = %.2f", hour);
	getch();
}