#include<stdio.h>
int mian(){
	int number;
	scanf("%d",&number);
	start:
		printf("rejan");
		if(number<=5){
			goto start;
		}
	return 0;
}
