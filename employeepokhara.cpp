#include<stdio.h>
#include<string.h>

struct Employee{
	int employeeID;
	char employeeName[50];
	double employeeSalary;
	char employeeAddress[100];
};

void PokharaEmployees(struct Employee employees[], int count){
	printf("\nEmployees With address Pokhara :\n");
	for(int i=0;i<count;i++){
		if(strcmp(employees[i].employeeAddress,"Pokhara")==0){
			printf("Employee ID:%d",employees[i].employeeID);
			printf("\nEmployee Name: %s",employees[i].employeeName);
			printf("\nEmployee Salary : %2.lf",employees[i].employeeSalary);
			printf("\nEmployee Address: %s\n",employees[i].employeeAddress);
		}
	}
}

int main(){
	struct Employee employees[5];
	
	for(int i=0;i<5;i++){
		printf("\nEnter a details of employee %d",i+1);
		printf("\nEnter ID :");
		scanf("%d",&employees[i].employeeID);
		
		printf("Enter Name :");
		scanf(" %[^\n]",&employees[i].employeeName);
		
		printf("Enter salar: ");
		scanf("%lf",&employees[i].employeeSalary);
		
		printf("Enter Address: ");
		scanf("%s",&employees[i].employeeAddress);
	}
	PokharaEmployees(employees,5);
	return 0;
}
