#include<stdio.h>
int main(){
	int first_matrix_row;
	printf("Enter a first matrix row : ");
	scanf("%d",&first_matrix_row);
	
	int first_matrix_columns;
	printf("Enter a first matrix cloumns : ");
	scanf("%d",&first_matrix_columns);
	
	int first_matrix[first_matrix_row][first_matrix_columns];
	
	printf("Enter a first matrix elements : \n");
	for(int i=0;i<first_matrix_row;i++){
		for(int j=0;j<first_matrix_columns;j++){
			scanf("%d",&first_matrix[i][j]);
		}
	}
	
	int second_matrix_row;
	printf("Enter a second matrix row : ");
	scanf("%d",&second_matrix_row);
	
	int second_matrix_columns;
	printf("Enter a second matrix cloumns : ");
	scanf("%d",&second_matrix_columns);

	int second_matrix[second_matrix_row][second_matrix_columns];
	
	printf("Enter a second matrix elements : \n");
	for(int i=0;i<second_matrix_row;i++){
		for(int j=0;j<second_matrix_columns;j++){
			scanf("%d",&second_matrix[i][j]);
		}
	}
	
	if(first_matrix_columns!=second_matrix_row){
		printf("The Matrix cannt be multiply");
	}
	
	else{
		int result[first_matrix_row][second_matrix_columns];
		
		for(int i=0;i<first_matrix_row;i++){
			for(int j=0;j<second_matrix_columns;j++){
				result[i][j]=0;
				
				for(int k=0;k<second_matrix_row;k++){
					result[i][j] += first_matrix[i][k] * second_matrix[k][j];
				}
			}
		}
		
		printf("The multiplication of two given matrix is : \n");
		for(int i=0;i<first_matrix_row;i++){
			for(int j=0;j<second_matrix_columns;j++){
				printf("%d ",result[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
