#include<stdio.h>
int main(){
	int number;
	printf("Enter any 1 to 3 numbers :");
	scanf("%d",&number);
	switch(number) {
		case 1:
			printf("okay");
			break;
			case 2:
				printf("nice");
				break;
				case 3:
					printf("good boy");
					break;
	default:
		printf("What is that");
}

	return 0;
}
