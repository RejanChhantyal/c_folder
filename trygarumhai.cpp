#include<stdio.h>
int main(){
	int age,roll_no;
char name[50],address[50],email[50];
char gender;
printf("enter roll_no:");
scanf("%d,&roll_no");
printf("enter age:");
scanf("%d,&age");
printf("enter name:");
scanf("%s,&name");
printf("enter address:");
scanf("%s,&address");
printf("enter email:");
scanf("%s,&email");
printf("enter gender:");
scanf(" %c,&gender");
return 0;
}

