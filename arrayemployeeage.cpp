#include<stdio.h>
int main(){
	int total_employee=25;
	int age[total_employee];
	printf("Enter the age of %d employees :\n",total_employee);
	for(int i=0;i<total_employee;i++){
		printf("Enter a age of employee no %d : ",i+1);
		scanf("%d",&age[i]);
	}
	printf("\nAge between 20 to 30 Employees are :\n");
	for(int i=0;i,total_employee;i++){
		if(age[i]<=30 && age[i]>=20){
			printf("%d\n",age[i]);
		}
	}
	return 0;
}
