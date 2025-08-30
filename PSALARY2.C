#include<stdio.h>
#include<conio.h>

void main(){
	float gloss, net, all, ded;
	clrscr();
	printf("enter gloss salary : ");
	scanf("%f", &gloss);

	if(gloss < 10000){
		all = gloss * 0.07;
		ded = gloss * 0.02;
	}else{
		all = gloss / 10;
		ded = gloss * 0.03;
	}
	net = gloss + all - ded;
	printf("net salary = %.0f", net);
	getch();
}