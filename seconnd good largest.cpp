#include<stdio.h>
int main(){
	int total_employee=5,largets,second_lagrgest;
	int age[total_employee];
	for(int i=0;i<total_employee;i++){
		scanf("%d",&age[i]);
		
	}
	largets=age[0];
	second_lagrgest=-2;
	for(int i=1;i<total_employee;i++){
		if(age[i]>largets){
			second_lagrgest=largets;
			largets=age[i];
		}
		else if(age[i]>second_lagrgest && largets!=age[i]){
			second_lagrgest=age[i];
		}
	}
	printf("The second largest age is %d",second_lagrgest);
	return 0;
}
