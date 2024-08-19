#include<stdio.h>
int main(){
	int arr[10] = {13, 6, 3, 0, 3,4 ,6,7,8,9};
	int temp;
	for(int i=0;i<=10-1;i++){
		for(int j=i+1;j<=10-1;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=0;i<=10-1;i++){
		printf("%d  \n",arr[i]);
	}
	return 0;
}
