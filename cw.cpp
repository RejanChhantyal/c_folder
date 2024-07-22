#include<stdio.h>
int main(){
	int number;
	printf("Enter how many students details do you need :");
	scanf("%d",number);
	for(int i=1;i<=number;i++){
	int roll_number;
	char name[50],facuilty[50],email[50],address[50];
	char gender;
	printf("Enter your roll_number : ");
	scanf("%d",&roll_number);
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("Enter your facuilty : ");
	scanf("%s",&facuilty);
	printf("Enter your email : ");
	scanf("%s",&email);
	printf("Enter your address : ");
	scanf("%s",&address);
	printf("Enter your gender : ");
	scanf(" %c",&gender);
	printf("CV details of students :\nStudents roll number is :%d\nstudents name is :%s\nstudents facuilty is :%s\nstudents email is :%s\nstudents address is :%s\nstudents gender is :%c",roll_number,name,facuilty,email,address,gender);
	}
	return 0;
}
