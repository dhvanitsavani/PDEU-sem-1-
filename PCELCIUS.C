#include<stdio.h>
#include<conio.h>

void main(){
	float celc, fer;
	clrscr();
	printf("enter temperature in celcius = ");
	scanf("%f", &celc);
	fer = (celc * 9 / 5) + 32;
	printf("temperature in feranhit = %.2f", fer);
	getch();
}