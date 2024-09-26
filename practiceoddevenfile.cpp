#include<stdio.h>
int main(){
	FILE *evenFile,*oddFile;
	int number[30];
	
	evenFile = fopen("even.txt","w");
	oddFile = fopen("odd.txt","w");
	
	if(evenFile==NULL || oddFile==NULL){
		printf("ERROR: file not opening");
		return 1;
	}
	
	printf("Enter 30 numbers : \n");
	for(int i=0;i<30;i++){
		printf("Enter %d  number : ",i+1);
		scanf("%d",&number[i]);
	}
	
	for(int i=0;i<30;i++){
		if(number[i]%2==0){
			fprintf(evenFile,"%d\n",number[i]);
		}
		else{
			fprintf(oddFile,"%d\n",number[i]);
		}
	}
	fclose(evenFile);
	fclose(oddFile);
	
	printf("\nThe number are successfully seprated and recorded in respective file.\n");
	return 0;
	
}
