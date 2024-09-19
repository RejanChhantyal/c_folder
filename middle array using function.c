//WAP to take input of odd number array and find the middle of array value and left side of value must lower then middle array and right side higher
#include<stdio.h>
int middle_arr(int arr_size){
	int arr[arr_size],temp,middle_arr,mid_arr_value;
	//taking input array from user
	for(int i=0;i<arr_size;i++){
		printf("Enter %d number : ",i+1);
		scanf("%d",&arr[i]);
	}
	//Now sorting the arry in assending order
	for(int i=0;i<arr_size;i++){
		for(int j=i+1;j<arr_size;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//Now finding the middle of the array
	middle_arr=(arr_size/2);//if arr is 5/2=2 it not middle number but in array number are store from 0 so 0to4 2 is middle
	mid_arr_value=arr[middle_arr];
	return mid_arr_value;
}
int main(){
	int arr_size,result;
	
	//taking array size from user which must have odd number
	printf("Enter a size of the array : ");
	scanf("%d",&arr_size);
	
	//now if the input is odd then passing the value to middle_arr function and printfing the result
	if(arr_size%2!=0){
		result=middle_arr(arr_size);
		printf("The middle of the arrays number is : %d ",result);
	}
	else{
		printf("you need to enter odd number in input");
	}
	return 0;
}
