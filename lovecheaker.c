#include<stdio.h>
#include<stdlib.h>
int main(){
	int number,max,min;
	char percentage='%';
	char boy_name[50],girl_name[50];
	max=100;
	min=0;
	srand(time(0));
	number=(rand() % (min-max+1));
	printf("check you love using computer \nplease dont enter space use underscore '_'\n");
	printf("\nEnter a boy_friend name : ");
	scanf("%s",&boy_name);
	printf("Enter a girl_friend name : ");
	scanf("%s",&girl_name);
	if(number<=80){
		printf("\nyou have strong connection");
		printf("\n------%s------",boy_name);
		printf("\n      %d%c",number,percentage);
		printf("\n------%s------",girl_name);
	}
	else if(number<=60){
		printf("\nyou have above average connection");
		printf("\n------%s------",boy_name);
		printf("\n      %d%c",number,percentage);
		printf("\n------%s------",girl_name);
		
	}
	else{
		printf("\nyou have lowest then low connection");
		printf("\n------%s------",boy_name);
		printf("\n      %d%c",number,percentage);
		printf("\n------%s------",girl_name);
	}
	return 0;
}
