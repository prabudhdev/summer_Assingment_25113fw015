#include<stdio.h>
int main(){
    int rev=0,rem,lower,upper,temp;
    printf("enter the lower and upper limit:");
    scanf("%d%d",&lower,&upper);
    printf("Armstrong numbers between %d and %d are: ",lower,upper);
    for(int i = lower; i<=upper;i++){
        temp=i;
        rev=0;
        while(temp!=0){
            rem=temp%10;
            rev=rev+rem*rem*rem;
            temp=temp/10;
        }
        if(rev==i){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}