#include<stdio.h>
#include<conio.h>

void main(){
	int hour, min;
	clrscr();
	printf("enter time in hours = ");
	scanf("%d", &hour);
	min = hour * 60;
	printf("time in minutes = %d", min);
	getch();
}