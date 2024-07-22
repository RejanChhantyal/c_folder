#include<stdio.h>
int main(){
	int time;
	printf("Enter your time :");
	scanf("%d",&time);
	if(time<6){
		printf("Sudents is enter under the 6 oclock");
	}
	else if (time>6){
		printf("students is enter before the 6 oclock");
	}
	else{
		printf("the students is entred in 6 oclock excate");
	}
	return 0;
}
