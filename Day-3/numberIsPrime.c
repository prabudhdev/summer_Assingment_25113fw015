#include <stdio.h>
int main(){
    int n,isPrime = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n <= 1){
        isPrime = 0;
    }
    else{
        for(int i=2; i<=n/2; i++){
            if(n%i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 1){
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
    return 0;
}