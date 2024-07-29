#include<stdio.h>
int main(){
    double total=0,deposit,withdraw;
    int pin,_try,totaltry = 0,_proceses,_again = 1;
    do{
        printf("----WELLCOME TO CHHANTYAL BANK LIMITED----");
        printf("\nEnter 4 digit pin code to access your account : ");
        scanf("%d",&pin);
        if(pin == 1010){
            do{
                printf("\n----WELLCOME----");
                printf("\nYou have entered correct pin code or alredy entred..");
                printf("\n\n----MAIN MENUE----");
                printf("\n1. Deposit Money\n2. Withdraw Money");
                printf("\n\nEnter 1 to deposit money , 2 to withdraw money and any other to exits : ");
                scanf("%d",&_proceses);
                switch(_proceses){
                    case 1:
                        printf("\n----Deposit Money----");
                        printf("\nEnter a amount to Deposite : ");
                        scanf("%lf",&deposit);
                        total += deposit;
                        printf("\nYou have Deposit %lfRupees And your current balance is %lfRupees.",deposit,total);
                        printf("\n\nEnter 1 to use again and any other number to exit : ");
                        scanf("%d",&_again);
                        break;
                    case 2:
                        printf("\n----Withdraw Money----");
                        printf("\nEnter a amount to Withdraw : ");
                        scanf("%lf",&withdraw);
                        if(total<withdraw){
                            printf("\nInsufecent amount your current balance is %lfRupees.",total);
                            printf("\n\nEnter 1 to use again and any other number to exit : ");
                            scanf("%d",&_again);
                        }
                        else{
                            total -= withdraw;
                            printf("\nYou have Withdraw %lfRupees And your current balance is %lfRupees.",withdraw,total);
                            printf("\n\nEnter 1 to use again and any other number to exit : ");
                            scanf("%d",&_again);
                        }
                        break;
                    default:
                        printf("\nyou have exit");
                        _again=0;//If hami le yesma again ko value 0 assigne na garko vaye while loop ko condition always fullfill hunthyo //and by _again ko value 0 pare ma loop ko condition nai full fill hudina ra loop bata scape garna sakinxa
                }
            }while(_again==1);
            break;
        }
        else{
            printf("\nYou have entered incorrect pin Now you have left few try ");
            printf("\n\nEnter 1 to try again and 3 or above 3 number to exit : ");
            scanf("%d",&_try);
            }
    totaltry += _try;
    }while(totaltry<=2);
    if(totaltry>=2){
        printf("\nYou have enter to may wrong pin..");
    }
    printf("\n\nThank You for using our CHHANTYAL BANK LiMITED..");
return 0;
}
