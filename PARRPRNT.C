#include<stdio.h>
#include<conio.h>

void main(){
	int arr[5], i;
	clrscr();

	printf("enter 5 values : ");

	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}

	for(i=0; i<5; i++){
		printf("\n%dth value of array : %d", i+1, arr[i]);
	}
	getch();
}