#include<stdio.h>
int main(){
    int t1=0,t2=1,nextTerm,n;
    printf("Enter the term number: ");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    printf("The %dth term of the Fibonacci series is: %d\n",n,t1);   
    return 0;
}