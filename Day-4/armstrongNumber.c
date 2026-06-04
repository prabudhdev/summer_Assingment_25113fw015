#include<stdio.h>
int main(){
    int n,rev=0,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        rev=rev+rem*rem*rem;
        temp=temp/10;
    }
    if(rev==n){
        printf("%d is an Armstrong number.\n",n);
    }
    else{
        printf("%d is not an Armstrong number.\n",n);
    }
    return 0;
}