#include<stdio.h>
#include<stdbool.h>
bool odd_or_even(int number){//using boolean function
	return (number%2==0);//here if the number is fullfill the condition then its return true if didnt then return false
}
int main(){
	int number;
	
	//taking input from user'
	printf("Enter a number to find it is odd or even : ");
	scanf("%d",&number);
	
	//calling the function
	if(odd_or_even(number)){//real thing true or fale which is return by bool functions
		printf("The number is even");
	}
	else{
		printf("The number is odd");
	}
	return 0;
}
