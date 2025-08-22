#include<stdio.h>
#include<conio.h>

void main(){
	float gloss, net, all, ded;
	clrscr();
	printf("enter gloss salary = ");
	scanf("%f", &gloss);
	all = gloss * 0.1;
	ded = gloss * 0.03;
	net = gloss + all - ded;
	printf("net salary = %.2f", net);
	getch();
}