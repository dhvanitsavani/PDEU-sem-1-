#include<stdio.h>
#include<conio.h>

void main(){
	int i;
	int notes[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
	long amount, count;
	clrscr();

	printf("enter amount : ");
	scanf("%ld", &amount);

	for(i=8; i>=0; i--){
		if(amount >= notes[i]){
			count = amount / notes[i];
			printf("\n%ld notes of %d", count, notes[i]);
			amount -= count * notes[i];
		}
	}

	getch();
}