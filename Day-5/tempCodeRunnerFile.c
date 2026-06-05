#include<stdio.h>
int main(){
    int n, sum=0,rem, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<n; i++){
        fact=1;
        for(int j=1; j<=i; j++){
            fact=fact*j;
        }
        sum=sum+fact;
}
if(n==sum){
    printf("%d is a strong no,",n);
} else {
    printf("%d is not a strong no.",n);
}
return 0;
}