#include<stdio.h>
int reverseNumber(int n){
    if(n == 0){
        return 0;
    }
    int lastDigit = n % 10;
    return lastDigit * 1 + reverseNumber(n / 10) * 10;
}
int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);

    printf("Reverse of %d is %d .\n",num,reverseNumber(num));
    return 0;
        
}