#include<stdio.h>
#include<conio.h>

void main(){
	int sub1, sub2, sub3, avg;
	clrscr();
	printf("enter three subjects marks : ");
	scanf("%d %d %d", &sub1, &sub2, &sub3);

	avg = (sub1 + sub2 + sub3) / 3;
	if(sub1 < 35 || sub2 < 35 || sub3 < 35){
		printf("failed !");
	}else{
		if(avg >= 35 && avg < 50){
			printf("third class");
		}else if(avg >= 50 && avg < 60){
			printf("second class");
		}else if(avg >= 60 && avg < 70){
			printf("first class");
		}else{
			printf("distinction");
		}
	}

	getch();
}