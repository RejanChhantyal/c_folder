#include<stdio.h>
int main(){
	int number;
	printf("enter number");
	scanf("%d",&number);
	thisisgood:
		printf("This is cool\n");
		number++;
		if(number<=5){
		goto thisisgood;// goto statement in c by using which we can go to the enter named//here we have made thisisgood then after goto thisisgood this code will go to the thisis cool line
		}
	return 0;
}
