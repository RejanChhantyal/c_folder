#include<stdio.h>
int main(){
//	int sum=0;
//	for(int i=1;i<=10;i++){
//		sum+=2*i;
//	}
//	printf("the sum of the first 10 even number is %d ",sum);


//	int number,sum=0;
//	printf("Enter a number : ");
//	scanf("%d",&number);
//	for(int i=1;i<=number;i++){
//		sum+=i;
//	}
//	printf("The sum of the number is %d up to n term .",sum);

	
//	int total_employee=5;
//	int age[total_employee];
//	for(int i=0;i<total_employee;i++){
//		scanf("%d",&age[i]);
//	}
//	for(int i=0;i<total_employee;i++){
//		if(age[i]>20 && age[i]<30){
//			printf("%d\n",age[i]);
//		}
//	}

	int largest,second_largest;
	int total_employee=5;
	int age[total_employee];
	for(int i=0;i<total_employee;i++){
		scanf("%d",&age[i]);
	}
	//inisalige the value
	largest=age[0];
	second_largest=-1;
	for(int i=0;i<total_employee;i++){
		if(age[i]>largest){
			second_largest = largest;
			largest=age[i];
		}
	else if(age[i]>second_largest && largest!=age[i]){
		second_largest=largest;
	}
	}
	printf("the second largest number is %d ",second_largest);
	
	return 0;
}
