#include<stdio.h>
int main(){
	int size;
	
	printf("Enter a size of matrix : ");
	scanf("%d",&size);
	
	int first_matrix[size][size],second_matrix[size][size],result_matrix[size][size];
	
	printf("Enter a first matrix elements : \n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&first_matrix[i][j]);
		}
	}
	
	printf("Enter a second matrix elements : \n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&second_matrix[i][j]);
		}
	}
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			result_matrix[i][j]= first_matrix[i][j] - second_matrix[i][j];
		}
	}
	printf("The subtraction of two given matrix is : \n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",result_matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
