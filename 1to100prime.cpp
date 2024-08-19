#include<stdio.h>
int main(){
	int isprime;
	printf("Prime number between 1 to 100 are :\n");
	for(int i=2;i<=100;i++){
		isprime = 1;
		for(int j= 2;j<i;j++){
			if(i%j==0){
				isprime =0;
				break;
			}
		}
		if(isprime==1){
			printf("%d\n",i);
		}
	}
	return 0;
}
