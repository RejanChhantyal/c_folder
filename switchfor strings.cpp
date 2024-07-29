#include<stdio.h>
int main(){
	char word[50];
	printf("Enter name of fruits : ");
//	scanf("%s",&word);
gets("%s",&word);
		switch(word){
		case "apple":
			printf("okay you have entern apple");
			break;
		
		case "mango":
			printf("okay you have enter mango");
			break;
		
		case "banana":
			printf("okay you have enter banana");
			break;
		
		case "pinaple":
			printf("okay you have enter pinaple");
			break;
		
		case "graves":
			printf("okay you have enter graves");
			break;
		
		default:{
			printf("IM so confuse i dont know what you enter");
			
		}
	}
	return 0;
}
