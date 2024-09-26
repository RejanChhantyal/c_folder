#include<stdio.h>
void swap(int *first_number, int *second_number){
	*first_number=*first_number+*second_number;
	*second_number=*first_number-*second_number;
	*first_number=*first_number-*second_number;
	}
int main(){
	int first_number=3,second_number=2;
	printf("The Number before swap:\nFirst Number = %d\nSecond Number = %d",first_number,second_number);
	
	swap(&first_number, &second_number);
	
	printf("\nThe Number After swap:\nFirst Number = %d\nSecond Number = %d\n",first_number,second_number);
	return 0;
}
