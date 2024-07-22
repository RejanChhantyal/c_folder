#include<stdio.h>
int main(){
	int age,roll_number;
	char name[30],address[50];
	char gender;
	printf("enter your age : ");
	scanf("%d",&age);
	printf("enter your roll_number : ");
	scanf("%d",&roll_number);
	printf("enter your name : ");
	scanf("%s",&name);
	printf("enter your address : ");
	scanf("%s",&address);
	printf("enter your gender : ");
	scanf(" %c",&gender);
	printf("your details : \nYour age is : %d\nYour roll_number is : %d\nYour name is : %s\nYour address is : %s\nYour gender is : %c",age,roll_number,name,address,gender);
	return 0;
	
}
