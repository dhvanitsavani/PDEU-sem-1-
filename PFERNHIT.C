#include<stdio.h>
#include<conio.h>

void main(){
	float celc, fer;
	clrscr();
	printf("enter temperature in feranhit = ");
	scanf("%f", &fer);
	celc = (fer - 32) * 5 / 9;
	printf("temperature in celcius = %.2f", celc);
	getch();
}