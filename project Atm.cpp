#include<stdio.h>
int main(){
    double total,deposit,withdraw;
    int pin,_try,totaltry = 0,_proceses,_again;
    do{
        printf("----WELLCOME TO CHHANTYAL BANK LIMITED----");
        printf("\nEnter 4 digit pin code to access your account : ");
        scanf("%d",&pin);
        if(pin==1010){
            do{
                printf("\n----WELLCOME----");
                printf("\nYou have entered correct pin code or alredy entred..");
                printf("\n\n----MAIN MENUE----");
                printf("\n1. Deposit Money\n2. Withdraw Money");
                printf("\nEnter 1 to deposit money , 2 to withdraw money and any other to exits : ");
                scanf("%d",&_proceses);
                switch(_proceses){
                    case 1:{
                        printf("----Deposit Money----");
                        printf("\nEnter a amount to Deposite : ");
                        scanf("%lf",&deposit);
                        total += deposit;
                        printf("You have Deposit %lfRupees And your current balance is %lfRupees.",deposit,total);
                        printf("\nEnter 1 to use again and any other number to exit : ");
                        scanf("%d",&_again);
                        break;
                    }
                    case 2:{
                        printf("----Withdraw Money----");
                        printf("\nEnter a amount to Withdraw : ");
                        scanf("%lf",&withdraw);
                        if(total<withdraw){
                            printf("Insufecent amount in current balance");
                            printf("\nEnter 1 to use again and any other number to exit : ");
                            scanf("%d",&_again);
                        }
                        else{
                            total -= withdraw;
                            printf("You have Withdraw %lfRupees And your current balance is %lfRupees.",withdraw,total);
                            printf("\nEnter 1 to use again and any other number to exit : ");
                            scanf("%d",&_again);
                        }
                        break;
                    }
                    default:{
                        printf("you have exit");
                    }
                }
            }while(_again==1);
            break;
        }
        else{
            printf("You have entered incorrect pin Now you have left few try ");
            printf("\nEnter 1 to try again and any other number to exit : ");
            scanf("%d",&_try);
            }
    totaltry += _try;
    }while(totaltry<=2);
    if(totaltry>=2){
        printf("You have enter to may wrong pin..");
    }
    printf("\nThank You for using our CHHANTYAL BANK..");
return 0;
}
