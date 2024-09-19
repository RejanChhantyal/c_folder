#include<stdio.h>
#include<stdlib.h>
int main(){
	int size;
	printf("Enter a size of the matrix : ");
	scanf("%d",&size);
	
	int first_matrix[size][size],second_matrix[size][size],result[size][size];
	
	printf("Enter a first matrix : \n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&first_matrix[i][j]);
		}
	}
	printf("Enter a second matrix : \n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&second_matrix[i][j]);
		}
	}
	printf("First matrix is :\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",first_matrix[i][j]);
		}
		printf("\n");
	}
	printf("second matrix is :\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",second_matrix[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			result[i][j]=first_matrix[i][j] + second_matrix[i][j];
		}
	}
	printf("The sum of two given matrix is :\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
