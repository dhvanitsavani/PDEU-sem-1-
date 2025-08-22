#include<stdio.h>
#include<conio.h>

void main(){
	float kg, gram;
	clrscr();
	printf("gram = ");
	scanf("%f", &gram);
	kg = gram / 1000;
	printf("kg = %.2f", kg);
	getch();
}