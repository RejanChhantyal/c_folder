#include<stdio.h>
int main(){
	int arr[4] = {66, 33, 94, 101}; //find 101
	int temp=101;
	int find=0;
	for(int i=0;i<4;i++){
		if(arr[i]==101){
			printf("The number %d is at %d place ",temp,i+1);
			find=1;
			break;
		}
	}
	if(find){//This is real thing if the expression is true or 1 or any number then the inside code is run if the expression is false which means 0 then the code will not exicute
		printf("The number %d is not at the array",temp);			
	}
	return 0;
}
