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




4.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int temp;//swapping the numbers or veriables
    temp = a;
    a = b;
    b = temp;
    printf("the value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}




5.Game:
#include<stdio.h>
int main(){
    int start,guss,try;
    printf("___________Well Come______________\n");
    printf("Enter 1 to play game and 2 to quite :");
    scanf("%d",&start);
    if(start==1){
        printf("Game Has Been Started \n");
        printf("To win this game you have to guess the number from 0 to 9 and you can try 2 times\n\n");
        printf("Enter your answer :");
        scanf("%d",&guss);
        if(guss==3 || guss==5){
            printf("You are correct");
        }
        else{
            for(int i=1;i<=2;i++){
                printf("You are wrong \n");
                printf("pess 1 to try againor press any other to quite :");
                scanf("%d",&try);
                if(try==1){
                    printf("Enter your answer :");
                    scanf("%d",&guss);
                    if(guss==3 || guss==5){
                        printf("You are correct ");
                        break;
                    }
                    else{
                        printf("Sorry your chance is over \n");
                        printf("ThankYou for playing this game.....");
                    }
                }
                else{
                    printf("You have quite the game \n");
                    printf("ThankYou for playing this game.....");
                    break;
                }
            }
        }
    }
    else{
        printf("Game Over");
    }
    return 0;
}





6.printfing the address of veriables:
#include<stdio.h>
int main(){
     int a = 5;
     int b = 5;
     printf("%p\n",&b);
     printf("%p",&a);//%p is format specifiier for  address print 
    return 0;
}



7. To store address of verables using pointer
#include<stdio.h>
int main(){
     int a = 5;
     int* x =&a;//int* pointer which can store address
     printf("%p",x);//%p is format specifiier for  address print 
    return 0;
}


8..VVVVVIMP assing value using pointer address
#include<stdio.h>
int main(){ // By using pointer we can playwith the adress and change its value
    int a = 25;
    int* x = &a;//Here we made pointer to store the address of the a veriables
    //This THis is very very important 
    *x = 7; //Here by doing *x we are going in inside of x where a address is stored and we are going to address of a and assigning the value 7 now the value of a is 7
    printf("%d",a)
}


9.Write a function to compute yhe greatest common diviser of the two given numbers:
#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a, int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){ //by using oposite loop you can do its easily //for(int i=min(a,b);i>=1;i--);// by using this method if the if condiotion fullfill then loop dosent run again
        if(a%i==0 && b%i==0){
            hcf = i;
            // if you use opostie method then you have to put break here //break;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d",a,b,hcf);
    return 0;
}
