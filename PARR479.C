#include<stdio.h>
#include<conio.h>

void main(){
	int arr[10], i;
	clrscr();

	printf("enter 10 values : ");

	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}

	for(i=0; i<10; i++){
		if(i==3 || i==6 || i==8){
			printf("\n%dth value of array : %d", i+1, arr[i]);
		}
	}
	getch();
}