#include<stdio.h>
int main(){
    double total=0,deposit,withdraw;
    int pin,_try=0,totaltry = 0,_proceses,_again = 1,counttry=2;
    do{
    	int count = 3;
        printf("----WELLCOME TO CHHANTYAL BANK LIMITED----");
        printf("\nEnter 4 digit pin code to access your account : ");
        scanf("%d",&pin);
        if(pin == 1010){
            do{
                printf("\n----WELLCOME----");
                printf("\nYou have entered correct pin code or alredy entred..");
                printf("\n\n----MAIN MENUE----");
                printf("\n1. Deposit Money\n2. Withdraw Money\n3. Your personal information\n4.Check you current Balance");
                printf("\n\nEnter 1 to deposit money , 2 to withdraw money , 3 to check your imformation , 4 to check your current balance and any other to exits : ");
                scanf("%d",&_proceses);
                switch(_proceses){
                    case 1:
                        printf("\n----Deposit Money----");
                        printf("\nEnter a amount to Deposite : ");
                        scanf("%lf",&deposit);
                        total += deposit;
                        printf("\nYou have Deposit +%lfRupees And your current balance is %lfRupees.",deposit,total);
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
                            printf("\nYou have Withdraw -%lfRupees And your current balance is %lfRupees.",withdraw,total);
                            printf("\n\nEnter 1 to use again and any other number to exit : ");
                            scanf("%d",&_again);
                        }
                        break;
                    case 3:
                    	printf("\nPersonal Information ..");
                    	printf("\nAccount holder Name : Rojip Chhantyal \nYour Account Number : 0080892893829\nYour Phone number : 9700000000\nYour Email address : rojipchhantyal5@gmail.com");
                    	printf("\n\nEnter 1 to use again and any other number to exit : ");
                        scanf("%d",&_again);
                        break;
                    case 4:
                    	printf("\nYour current Bank Balance is %lf ",total);
                    	printf("\n\nEnter 1 to use again and any other number to exit : ");
                        scanf("%d",&_again);
                        break;
                    default:
                        _again=0;//If hami le yesma again ko value 0 assigne na garko vaye while loop ko condition always fullfill hunthyo //and by _again ko value 0 pare ma loop ko condition nai full fill hudina ra loop bata scape garna sakinxa
                }
            }while(_again==1);
            printf("\nYou have exit..");
            break;
        }
        else{
            printf("\nYou have entered incorrect pin Now you have %d try left",counttry);
            counttry--;
            printf("\n\nEnter 1 to try again and any other to exit : ");
            scanf("%d",&_try);
            }
        totaltry+= (_try!=2) ? _try : (_try+2);//Ternary operator(You cant directly assign value inside of ternary operators
    }while(totaltry<=2);
    if(_try>=2){
    	printf("\nYou have exit...");
	}
    else if(totaltry>2 && totaltry<4){
        printf("\nYou have enter to may wrong pin..");
    }
    printf("\n\nThank You for using our CHHANTYAL BANK LiMITED..");
return 0;
}
