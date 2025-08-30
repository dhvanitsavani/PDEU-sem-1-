#include<stdio.h>
#include<conio.h>

void main(){
	int n;
	clrscr();
	printf("enter a number : ");
	scanf("%d", &n);

	if(n % 7 == 0){
		printf("number is divisible by 7");
	}else{
		printf("number is not divisible by 7");
	}

	getch();
}