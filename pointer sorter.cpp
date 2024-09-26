#include<stdio.h>
#include<stdlib.h>
void sort_arr(int*,int);

int main(){
	int arr[]={50,10,40,30,20};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	sort_arr(arr,size);
	
	printf("Sorted array \n");
	for(int i=0;i<size;i++){
		printf("%d",*(arr+i));
	}
	return 0;
}
