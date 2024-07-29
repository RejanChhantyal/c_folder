#include<stdio.h>
int main(){
char alphabet;
printf("Enter a any cpital alphabets :");
scanf("%c",&alphabet);
	switch(alphabet){
		case 'A':{
			printf("okay you have entern A");
			break;
		}
		case 'B':{
			printf("okay you have enter B");
			break;
		}
		case 'C':{
			printf("okay you have enter C");
			break;
		}
		case 'D':{
			printf("okay you have enter D");
			break;
		}
		case 'E':{
			printf("okay you have enter E");
			break;
		}
		default:{
			printf("Okay you have enter above then A to E");
		}
	}
	return 0;
}
