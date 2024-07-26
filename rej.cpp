#include<stdio.h>
void assign(int* x){//here int* x is an pointer veriable
	scanf("%p",&*x);//here we are taking inputs in x pointer stored address
}
int main(){
		int a;
		a=10;
		assign(&a);//function calling through pass by reference 
		printf("The new value is : %d",a);
		void okay();//function prototype by using this we can call the function bellow or from anywhere..
		okay();
	return 0;
}
void okay(){
	printf("\nso you have change the value of a using pointers Not bad ");
}
