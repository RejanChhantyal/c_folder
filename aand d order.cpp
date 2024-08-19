#include<stdio.h>
int main(){
	int arr[5]= {44,3,92,1,23};
	int temp;
	for(int i=0;i<5;i++){//upper loop or upper for
		for(int j=i+1;j<5;j++){//lower loop or lower for
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("assending order \n");
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	printf("\nDEsending order \n");
	for(int i=4;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	return 0;
	}
