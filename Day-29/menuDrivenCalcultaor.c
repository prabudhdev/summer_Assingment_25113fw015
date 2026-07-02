#include <stdio.h>

int main(){

    int ch;
    float a,b;

    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);

    printf("1.Add\n2.Sub\n3.Mul\n4.Div length");
    scanf("%d",&ch);

    switch(ch){

    case 1: printf("%.2f",a+b); break;
    case 2: printf("%.2f",a-b); break;
    case 3: printf("%.2f",a*b); break;
    case 4:
        if(b!=0)
            printf("%.2f",a/b);
        else
            printf("Division by zero");
    }

    return 0;
}