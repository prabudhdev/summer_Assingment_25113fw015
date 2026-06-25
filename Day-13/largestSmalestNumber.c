#include<stdio.h>
int main()
{
    int arr[10],i,largest,smallest;
    printf("Enter the 10 elements :\n");
    for (i =0 ; i < 10 ; i++){
        scanf("%d",&arr[i]);
    }
    largest = smallest = arr[0];
    for(i = 0 ; i< 10 ;i++){
        if(arr[i] > largest){
            largest = arr[i];
            if(arr[i] < smallest){
                smallest = arr[i];
            }
        }
    }
        printf("Largest element is : %d\n",largest);
        printf("smallest element is : %d",smallest);
        return 0;
}
