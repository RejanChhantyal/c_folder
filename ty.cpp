#include<stdio.h>
int main(){
	int age,roll_no;
char name[50],address[50],email[50];
char gender;
printf("enter roll_no:");
scanf("%d",&roll_no);
printf("enter age:");
scanf("%d",&age);
printf("enter name:");
scanf("%s",&name);
printf("enter address:");
scanf("%s",&address);
printf("enter email:");
scanf("%s",&email);
printf("enter gender:");
scanf(" %c",&gender);
printf("Your roll number is :%d",roll_no);
printf("\nYour age is :%d",age);
printf("\nYour name is :%s",name);
printf("\nYour address is :%s",address);
printf("\nYour email is :%s",email);
printf("\nYour gender is :%c",gender);
return 0;
}

