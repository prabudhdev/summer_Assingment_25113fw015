#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
    }
    int main (){
        int num1,num2;
        printf("Enter a number :");
        scanf("%d%d",&num1,&num2);
        printf("Max = %d\n",max(num1,num2));
        return 0;

    }
