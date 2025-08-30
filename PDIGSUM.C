#include<stdio.h>
#include<conio.h>

void main(){
	int n, sum=0;
	clrscr();
	printf("enter a number : ");
	scanf("%d", &n);

	while(n != 0){
		sum = sum + (n % 10);
		n = n / 10;
	};
	printf("sum = %d", sum);

	getch();
}