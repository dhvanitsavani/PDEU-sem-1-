#include<stdio.h>
#include<conio.h>

void main(){
	int arr[5], i, j, temp;
	clrscr();
	printf("enter 5 values of array : ");

	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(arr[i] <= arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(i=0; i<5; i++){
		printf("\n%d", arr[i]);
	}
	getch();
}