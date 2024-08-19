#include<stdio.h>
int main(){
	int number;
	int temp = 1;
	printf("Enter a number : ");
	scanf("%d",&number);
	for(int i = 2;i<number;i++){
		if(number%i==0){
			temp = 0;
			break;
		}
	}
	if(number==1){
		printf("The number is nither prime nor not");
	}
	else if(temp){
		printf("The number is prime");
	}
	else{
		printf("The number is not prime");
	}
	return 0;
}
