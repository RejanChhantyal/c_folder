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
        	int i;//you can do (int i=1,i<=2,i++)
            for(i=1;i<=2;i++){
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
