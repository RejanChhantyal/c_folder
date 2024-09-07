#include<stdio.h>
int main(){
	int sum=0;
	for(int i=1;i<=10;i++){
		sum=sum+2*i;
	}
	printf("The sum of first 10 even number is %d",sum);
	return 0;
}
