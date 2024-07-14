1.
//function prototype
#include<stdio.h>
int main(){
    void function(); // function prototype by using the if we made any function lower or any where we can use the function
    function();
    return 0;
}
void function(){
    printf("Hello");
}



2.
#include<stdio.h>
//This function is for to get fractional number 
int factorial(int x){
    int fact =1;
        for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
//This function is for to get combinational value using fractional formula
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;//to get integer value
    printf("Enter a no of lines : ");
    scanf("%d",&n);//to get input values from user
    //This loop is for print line line which is entred by user
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n+1-i;k++){//This loop is for space
            printf(" ");//printing the space
        }
        for(int j=0;j<=i;j++){//to print comulns
            int icj = combination(i,j);//this called function calling which is calling int combination function and transfering value of i and j to n r
            printf("%d ",icj);//to print the value of icj
        }
        printf("\n");//to give enter every one column printing cycle done
    }
    return 0;//Returntype 0 is for integer function type 
}
/*If we put 5 input then the op will be
                     1
                    1 1
                   1 2 1
                  1 3 3 1
                 1 4 6 4 1
                1 5 10 10 5 1       
By using function we can use it many times using function call and it also reduce the code */





3.
#include<stdio.h>
int factorial(int a){
    int fact = 1;
    for(int i=2;i<=a;i++){
        fact = fact *i;
    }
    return fact;
}
int combination(int n,int r){
    int npr= factorial(n)/factorial(n-r);
    return npr;
}
int main(){
    int r;
    printf("enter a first number : ");
    scanf("%d",&r);
    int o;
    printf("enter a second number : ");
    scanf("%d ",&o);
    int b = combination(r,o);
    printf("%d ",b);
    return 0;
}