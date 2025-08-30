#include<stdio.h>
#include<conio.h>

void main(){
	int i, n, sum=0, j=2;
	clrscr();
	printf("enter n : ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		sum += j;
		j += 2;
	}
	printf("sum = %d", sum);

	getch();
}