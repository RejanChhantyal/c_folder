#include<stdio.h>
int main(){
	int totalemployee=25;
	int age[totalemployee];
	printf("Enter a age of employees : \n");
	for(int i=1;i<totalemployee;i++){
		printf("Enter a age of %d employee : ",i+1);
		scanf("%d",&age[i]);
	}
	//to get age between 20 to 30
	printf("Age between 20 to 30 are : \n");
	for(int i=1;i<totalemployee;i++){
		if(age[i]>=20&& age[i]<=30){
			printf("%d\n",age[i]);
		}
	}
	return 0;
}
