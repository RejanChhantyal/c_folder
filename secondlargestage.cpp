#include<stdio.h>
int main(){
	int temp=0,total_Employee=30;
	int age[total_Employee];
	for(int i=0;i<total_Employee;i++){
		printf("Enter a age : ");
		scanf("%d",&age[i]);
	}
	for(int i=0;i<total_Employee;i++){
		for(int j=i+1;j<total_Employee;j++){//i+1
			if(age[i]>age[j]){
				temp = age[i];
				age[i]=age[j];
				age[j]=temp;
			}
		}
	}
	printf("Second largest age of employee is : %d ",age[total_Employee-2]);
	return 0;
}
