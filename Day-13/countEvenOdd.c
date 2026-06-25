#include<stdio.h>
int main(){
    int i,arr[10];
    int odd = 0 , even = 0 ;
    printf("Enter the 10 elements :");
    for( i = 0 ; i <10 ; i++){
        scanf("%d",&arr[i]);
    }
    for( i = 0 ; i< 10 ; i++){
        if(arr[i] % 2 == 0 ){
            even++;
    }else{
        odd++;
    }
}
printf("Number of even elements = %d \n",even);
printf("Number of odd elements = %d \n",odd);
return 0 ; 
}