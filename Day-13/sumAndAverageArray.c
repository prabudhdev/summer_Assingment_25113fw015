#include<stdio.h>
int main (){
    int arr[10],i,sum=0;
    float average;
    printf("Enter the elements :\n");
    for(i = 0 ; i <10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average = (float)sum /10 ;
    printf("sum is %d\n",sum );
    printf("average is %f ",average);

    return 0 ;
}