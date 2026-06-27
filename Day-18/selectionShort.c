#include<stdio.h>
int main(){
    int n,i,j,temp,min;

printf("Enter the size: ");
scanf("%d",&n);

int arr[n];

printf("Enter the elements :");
for(i = 0 ; i < n; i++){
    scanf("%d",&arr[i]);
}


for ( i = 0; i < n - 1; i++)
{
    min = 1 ;

    for ( j = 0; j < n; j++)
    {
        if(arr[j] < arr[min])
        min = j;
    }
    temp = arr[i];
    arr[i] = arr[min] ;
    arr[min] = temp;
}
printf("Sorted array :\n");
for(i = 0 ; i< n ; i++){
    printf("%d\t",arr[i]);
}
return 0 ;

}