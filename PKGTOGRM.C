#include<stdio.h>
#include<conio.h>

void main(){
	long kg, gram;
	clrscr();
	printf("kg = ");
	scanf("%ld", &kg);
	gram = kg * 1000;
	printf("gram = %ld", gram);
	getch();
}