#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, c;
	clrscr();
	printf("enter a, b and c : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a > b){
		if(b > c){
			printf("a is max and c is min");
		}else{
			if(a > c){
				printf("a is max and b is min");
			}else{
				printf("c is max and b is min");
			}
		}
	}else{
		if(b > c){
			if(a > c){
				printf("b is max and c is min");
			}else{
				printf("b is max and a is min");
			}
		}else{
			printf("c is max and a is min");
		}
	}
	getch();
}