#include<stdio.h>
#include<conio.h>

void main(){
	int n, digits=0;
	clrscr();
	printf("enter a number : ");
	scanf("%d", &n);

	while(n != 0){
		digits++;
		n = n / 10;
	};
	printf("%d digits", digits);

	getch();
}