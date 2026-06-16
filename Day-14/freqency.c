#include<stdio.h>
int main (){
    int arr[100],n,i,freq =0 ,element;
    printf("Enter the number the element :");
    scanf("%d",&n);

    printf("Enter the array element :");
    for(i=1 ; i <n ;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the elements whose frequency you want to find :   ");
    scanf("%d",&element);
    for ( i = 0; i < n; i++)
    {
        if(arr[i] == element ){
            freq++;
        }
    }
    printf("Frequency of %d = %d",element , freq);
    return 0;
    
}