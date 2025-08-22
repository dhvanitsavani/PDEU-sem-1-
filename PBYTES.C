#include<stdio.h>
#include<conio.h>

void main(){
	float byte, kb, mb, gb;
	clrscr();
	printf("enter bytes = ");
	scanf("%f", &byte);
	kb = byte / 1000;
	mb = kb / 1000;
	gb = mb / 1000;
	printf("\nKB = %.2f", kb);
	printf("\nMB = %.2f", mb);
	printf("\nGB = %.2f", gb);
	getch();
}