#include<stdio.h>
int main(){
	int number,sum=0;
	printf("Enter a number : ");
	scanf("%d",&number);
	//to get the sum
	for(int i=1;i<=number;i++){
		sum+=i;
	}
	//for oputput
	printf("The sum of the number is %d of to n terms.",sum);
	return 0;
}
