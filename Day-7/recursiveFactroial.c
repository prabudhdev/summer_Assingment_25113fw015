#include<stdio.h>
int factorial (int n){
    if(n==0 || n == 1)
    return 1;
    else
    return n * factorial(n-1);

}
int main(){

    int num;

    printf("Enter a number :");
     scanf("%d",&num);

     if(num < 0){
        printf("factorial id nit defined for negative numaber .\n");
         }else{
            printf("Factorial of %d id %d.\n",num ,factorial(num)); 

         }
         return 0;
}