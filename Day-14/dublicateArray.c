#include<stdio.h>
int main (){
    int arr[100] , i , j , n ;
    printf("enter the number of element : ");
    scanf("%d",&n);
    
    printf("Enter the elements of array :");
    for(i = 1 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate  elements are  :");
     for(i =  1 ; i < n; i++){
        for(j = i + 1 ; j< n + 1 ;j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
     }
     return 0 ;
}