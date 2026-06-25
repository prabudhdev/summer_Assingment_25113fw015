#include<stdio.h>
int findMostFrequent(int  arr[], int n ){
    int maxCount = 0;
    int mostFrequent = -1;

    for (int i = 0 ; i<n ; i++){
        int count =0 ;
        for(int j ; j< n ; j++){
            if(arr[i] == arr[j]){
                count++ ;
            }
            if(count > maxCount){
                maxCount = count ;
                mostFrequent = arr[i];
            }
        }
    }
    return mostFrequent;
}
