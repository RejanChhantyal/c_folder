#include<stdio.h>
int main(){
	int roll[10];
	char student_name[50][4];
	for(int i=0;i<=4;i++){
		printf("Enter students roll number :");
		scanf("%d",&roll[i]);
		printf("Enter name of students :");
		scanf("%s",&student_name[i]);
	}
	printf("\n\n***Students roll number and name***\n");
	for(int i=0;i<=4;i++){
		printf("The Roll number of the students is : %d \n",roll[i]);
		printf("The name of students is : %s \n",student_name[i]);
	}
	return 0;
}
