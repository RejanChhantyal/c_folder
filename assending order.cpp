#include<stdio.h>
int main(){
	int arr[5] = {4, 0, 1, 3, 2};
	int temp;
	for(int i=0;i<5;i++){//upper loop or upper for
		for(int j=i+1;j<5;j++){//lower loop or lower for
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	} int i;
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
