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
	printf("The second largest number is %d",arr[3]);
	return 0;
}
