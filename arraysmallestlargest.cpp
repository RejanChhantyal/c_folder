#include<stdio.h>
int main()
{ 
int arr[5]= {44,3,92,1,23};
int largest = arr[0];
int smallest = arr[0];
for(int i=1;i<5;i++){
	if(arr[i]<smallest){
		smallest=arr[i];
	}
	if(arr[i]>largest){
		largest=arr[i];
	}
}
printf("The largest number is %d",largest);
printf("\nThe smallest number is %d",smallest);
return 0;

}

