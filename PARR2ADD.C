#include<stdio.h>
#include<conio.h>

void main(){
	int arr1[2][2], arr2[2][2], result[2][2], i, j;
	clrscr();

	printf("enter 1st array's 4 values : ");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("\nenter 2nd array's 4 values : ");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &arr2[i][j]);
		}
	}

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("\nresult : \n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\n", result[i][j]);
		}
	}
	getch();
}