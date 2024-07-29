#include<stdio.h>
int main(){
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	switch(number){
		case 1:{
			printf("okay you have entern one");
			break;
		}
		case 2:{
			printf("okay you have enter two");
			break;
		}
		case 3:{
			printf("okay you have enter three");
			break;
		}
		case 4:{
			printf("okay you have enter four");
			break;
		}
		case 5:{
			printf("okay you have enter five");
			break;
		}
		default:{
			printf("Okay you have enter above then five numer");
			break;
		}
	}
	return 0;
}
