#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 1 and 100 are: \n");

    for(num = 2; num <= 100; num++) {
        isPrime = 1; // Assume number is prime until proven otherwise
        
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}

