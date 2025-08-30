#include<stdio.h>
#include<conio.h>

void main(){
	int n, rem, rev=0;
	clrscr();
	printf("enter a number : ");
	scanf("%d", &n);

	while(n != 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	};
	printf("reverse = %d", rev);

	getch();
}