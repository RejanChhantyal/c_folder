//WAP to take input od n number of array and add even and odd numbers different and subtrack odd from even
#include<stdio.h>
int arr_sub(int arr_size){
	int arr[arr_size],odd,even;
	odd=0;
	even=0;
	//taking input from user in array
	for(int i=0;i<arr_size;i++){
		printf("Enter a %d number : ",i+1);
		scanf("%d",&arr[i]);
	}
	//now finding the odd or even and sum them
	for(int i=0;i<arr_size;i++){
		if(arr[i]%2==0){
			even+=arr[i];
		}
		else{
			odd+=arr[i];
		}
	}
	return even-odd;
}
int main(){
	int result,arr_size;
	
	//taking the size of array from user
	printf("Enter a size of array : ");
	scanf("%d",&arr_size);
	result=arr_sub(arr_size);//function calling and the result storing in result veriable
	
	//now printing the result
	printf("The result of the subtraction odd from even arrys is : %d",result);
	return 0;
}
