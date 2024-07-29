#include<stdio.h>
int main(){
	double firstnumber,secondnumber,sum,difference,multiply,division;
	int option;
	char input;
	do{
	printf("menu\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
	printf("\nEnter first number : ");
	scanf("%lf",&firstnumber);
	printf("\nEnter second number : ");
	scanf("%lf",&secondnumber);
	printf("\nWhich option do you want to operate?\nChose an option from menu : ");
	scanf("%d",&option);
	switch(option){
		case 1:
			sum = firstnumber + secondnumber;
			printf("Addition of the number is : %lf",sum);
			break;
		case 2:
			difference = firstnumber - secondnumber;
			printf("Subtract of the number is : %lf",difference);
			break;
		case 3:
			multiply = firstnumber * secondnumber;
			printf("Addition of the number is : %lf",multiply);
			break;
		case 4:
			division = firstnumber / secondnumber;
			printf("Addition of the number is : %lf",division);
			break;
		default:
			printf("There is no options");
	}
	printf("\nDo you want to continue ??\nPress y to continue and aany other to exit...");
	scanf(" %c",&input);
}while(input == 'y' || input == 'Y');
	return 0;
}
