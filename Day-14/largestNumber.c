#include<stdio.h>
int main(){
    int arr[100],i,n;
    int largest,secondLargest;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    printf("Enter the array element :");
    for(i = 1 ; i < n ; i++){

    scanf("%d",&arr[i]);
    }
    largest = secondLargest = -99999;

    for ( i = 0; i < n; i++)
    {  
         if(arr[i] > largest){

        secondLargest = largest;
        largest = arr[i];
    }
    
    else if(arr[i] > secondLargest && arr[i] != largest ){
        secondLargest = arr[i];
    }
}
printf("Second largest element = %d\n ",secondLargest);
return 0 ; 

    
}