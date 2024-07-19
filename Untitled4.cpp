#include<stdio.h>
int main(){
	int roll_number,age;
	char name[50],address[50],email[50];
	char gender;
	printf("Enter your roll number : ");
	scanf("%d",&roll_number);
	printf("\nEnter your age : ");
	scanf("%d",&age);
	printf("\nEnter your name : ");
	gets("%s",&name);
	printf("\nEnter your address : ");
	scanf("%s",&address);
	printf("\nEnter your email : ");
	scanf("%s",&email);
	printf("\nEnter your Gender : ");
	scanf(" %c",&gender);
	printf("\nMy Details :");
	printf("\nRoll Number : %d",roll_number);
	printf("\nName : %s",name);
	printf("\nAge : %d",age);
	printf("\nEmail : %s",email);
	printf("\nAdress : %s",address);
	printf("\nGender : %c",gender);
	return 0;
}
