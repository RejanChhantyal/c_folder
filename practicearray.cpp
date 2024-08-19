#include<stdio.h>
int main(){
	int arr[10] = {4,6,3,9,5,2,8,1,3,10};
	int find = 3;
	int expresion = 0;
	for(int i=0;i<10;i++){
		if(arr[i]==find){
			printf("The number %d is at %d potions...\n",find,i+1);
			expresion = 1;
			
		}
	}
	if(!expresion){//Real thing this is expression this condition run when the expression is true
		printf("The number %d is not at the array...",find);
	}
	return 0;
}
