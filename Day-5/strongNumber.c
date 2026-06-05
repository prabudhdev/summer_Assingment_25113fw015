#include<stdio.h>
int main(){
    int n, sum=0,rem, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=n; i>0; i=i/10){
        rem = i%10;
        fact=1;
        for(int j=1; j<=rem; j++){
            fact = fact*j;
        }
        sum = sum + fact; 
}
if(n==sum){
    printf("%d is a strong no,",n);
} else {
    printf("%d is not a strong no.",n);
}
return 0;
}