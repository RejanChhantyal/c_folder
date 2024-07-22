#include<stdio.h>
int main(){
	int roll_no;
	char name[50],facuilty[50];
	char gender;
	printf("Enter a students name :");
	scanf("%s",&name);
	printf("Enter a students roll number : ");
	scanf("%d",&roll_no);
	printf("Enter a students facuilty :");
	scanf("%s",&facuilty);
	printf("Enter a students gender :");
	scanf(" %c",&gender);
	printf("\nNow Enter the marks of the student out of 100 :\n");
	int math,english,micro,cp,account,total;
	printf("Enter the maths marks : ");
	scanf("%d",&math);
	printf("Enter the english marks : ");
	scanf("%d",&english);
	printf("Enter the micro prosser marks : ");
	scanf("%d",&micro);
	printf("Enter the c programming marks : ");
	scanf("%d",&cp);
	printf("Enter the account marks : ");
	scanf("%d",&account);
	total= math+english+micro+cp+account;
	printf("\n\nResult of the students :\nThe name of the students is :%s\nThe roll number of the students is :%d\nThe facuilty of the students is :%s\nThe gender of the students is :%c",name,roll_no,facuilty,gender);
	printf("\nObtain marks of the students :\n\tIn Math : %d\n\tIn English : %d\n\tIn Micro proceser : %d\n\tIn C programming : %d\n\tIn Accounting : %d",math,english,micro,cp,account);
	printf("\n*Total obtain marks : %d\n",total);
	float percentage=((float)total*100.0)/500.0;//casting the integer to a float in the expration
	printf("*Obtain percentage is : %f\n",percentage);
	if(percentage>=80){
		printf("*You have secured first devision");
	}
	else if(percentage>=60){
		printf("*You have secured second devision");
	}
	else{
		printf("*You have secured less then second disvision");
	}
	if(percentage>=40.0){
		printf("\n*You are passed");
	}
	else("\n*You are failed");
	return 0;
}
