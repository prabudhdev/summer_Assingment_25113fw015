#include<stdio.h>
int main(){
    int i,n,key,low,high,mid;


    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter sorted array elements : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element  to search : ");
    scanf("%d",&key);

    low = 0 ;
    high = n -1 ;

    while(low <= high ){
        mid = (low + high) / 2;

        if(arr[mid] ==  key){
            printf("elements found att index %d " ,mid);
            return 0;
        }else if(arr[mid] < key ){
            low = mid =1 ;
        }else {
            high = mid -1;
        }
        printf("Element not found");
        return 0;
    }
}