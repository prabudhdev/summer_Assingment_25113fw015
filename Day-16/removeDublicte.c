#include<stdio.h>
#include<stdlib.h>
int compare ( const void *a , const void *b){
    return (*(int*)a -  *(int*)b);

}
int removeDuplicaates(int arr[],int n){
    if(n == 0 || n == 1){
        return 0 ;
    }

        qsort(arr , n , sizeof(int) , compare);
        int j=0;
        for(int i = 0 ; i< n-1;i++){
            if(arr[i] !=arr[i + 1]){
                arr[j++] = arr[i];
            }
        }
        arr[j++] = arr[n - 1];
        return j;
    }
    int main (){
        int arr[] = {1,2,3,4,4,45,5,5,3};
        int n = sizeof(arr)  / sizeof(arr[0]);
        int newSize = removeDuplicaates(arr , n);
        printf("Array after removing dublicates   :");
        for(int i = 0 ; i< newSize ; i++){
            printf("%d",arr[i]);
        }
        return 0 ;
    }
