#include<stdio.h>
#include<stdlib.h>
int compare( const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
void findPair (int arr[],int n,int target ){
    qsort(arr , n , sizeof(int),compare);
    int left = 0 ;
    int right = n -1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            printf("pair found : (%d , %d)\n",arr[left] , arr[right]);
            return;
        }else if(sum < target){
            left++;
        }else{
            right--;
        }
    }
    printf("No pair found.\n");
}