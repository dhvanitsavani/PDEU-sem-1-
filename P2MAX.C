#include<stdio.h>
#include<conio.h>

void main(){
	int a, b;
	clrscr();
	printf("enter a and b: ");
	scanf("%d %d", &a, &b);
	if(a > b){
		printf("a is max and b is min");
	}else if(a == b){
		printf("both are equal");
	}else{
		printf("b is max and a is min");
	}
	getch();
}