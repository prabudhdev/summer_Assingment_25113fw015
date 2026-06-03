#include<stdio.h>
int main(){
    int n;
    printf("Enter the positive integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}