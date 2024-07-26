#include<stdio.h>
int main(){
    int number,amount,newamount;
    amount=1000;
    printf("------------WEll COME-------------");
    printf("\n----To Rejan Bank----");
    printf("\n----Your current Bank Balance is :%d----\n----Depostie Money----(press 1)\n----Witdraw Money----(press 2)\n",amount);
    scanf("%d",&number);
    switch (number){

    case 1:{
        printf("----Deposite Money----");
        printf("\nEnter your amount :");
        scanf("%d",&newamount);
        amount=amount+newamount;
        printf("\nyou have deposite +Rs%d And your new Bank Balance is :%d",newamount,amount);
        break;
    }
    case 2:{
        int withdrawamount,currentwithdraw;
        printf("----Withdraw Money----");
        printf("\nEnter your amount :");
        scanf("%d",&withdrawamount);
        if(withdrawamount>amount){
            printf("You cant wethdraw more then your amount");
            break;
        }
        currentwithdraw=amount-withdrawamount;
        printf("You have withdraw -Rs%d and your current Bank Balance is :%d",withdrawamount,currentwithdraw);
        break;
    }
    default :{
        printf("I think you have enter a wrong number");
        break;
    }
    }
    return 0;
}