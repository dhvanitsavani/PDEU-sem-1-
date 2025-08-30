#include<stdio.h>
#include<conio.h>

void main(){
	float gloss, net, dis;
	clrscr();
	printf("enter gloss sales : ");
	scanf("%f", &gloss);

	if(gloss >= 10000){
		if(gloss >= 20000){
			dis = gloss * 0.15;
		}else{
			dis = gloss / 10;
		}
	}else{
		dis = gloss * 0.05;
	}
	net = gloss - dis;
	printf("net sales = %.0f", net);

	getch();
}