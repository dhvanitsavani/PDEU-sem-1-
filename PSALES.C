#include<stdio.h>
#include<conio.h>

void main(){
	float gloss, net;
	clrscr();
	printf("enter gloss sales = ");
	scanf("%f", &gloss);
	net = gloss - (gloss * 0.1);
	printf("net sales = %.2f", net);
	getch();
}