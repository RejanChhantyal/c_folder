#include<stdio.h>
int main(){
	int number[30];
	
	FILE *evenFile, *oddFile;
	
	evenFile = fopen("even.txt","w");
	oddFile = fopen("odd.txt","w");
	
	if(evenFile == NULL || oddFile == NULL){
		printf("Error: coudnt open file.\n");
		return 1;
	}
	
	printf("Enter 30 Numbers :\n");
	for(int i=0;i<30;i++){
		printf("Enter a %d number : ",i+1);
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
	printf("Even and odd number are written to 'even.txt' and 'odd.txt' respectivly.\n");
	return 0;
}
