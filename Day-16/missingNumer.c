#include<stdio.h>
    int findMissingNumber(int arr[],int n) {
        int totalSum = n*(n+1)/2;
        int arrSum = 0 ;
        for(int i = 0 ; i <n-1;i++){
            arrSum += arr[i];
        }
        return totalSum - arrSum ;
    }

int main (){
    int arr[] = {1,2,5,6,8};
    int n = 8 ;

    int missing = findMissingNumber(arr,n);

    printf("The missing number is : \n %d",missing);
    return 0 ;
}