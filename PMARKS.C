#include<stdio.h>
#include<conio.h>

void main(){
	int sub1, sub2, sub3, total, avg;
	clrscr();
	printf("enter three subjects marks = ");
	scanf("%d %d %d", &sub1, &sub2, &sub3);
	total = sub1 + sub2 + sub3;
	avg = total / 3;
	printf("\ntotal marks = %d", total);
	printf("\naverage marks = %d", avg);
	getch();
}