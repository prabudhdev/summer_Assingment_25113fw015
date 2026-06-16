#include<stdio.h>
int main(){
    int arr[100],n,key,found =0, i ;


    printf("Enter the number of element : ");
    scanf("%d",&n);


    printf("Enter the array element :\n");
    for(i = 0 ; i<n ; i++){

        scanf("%d",&arr[i]);

    }


    printf("Enter the element to search :");
    scanf("%d",&key);

    for(i = 0; i < n ;i++){


        if(arr[i] == key ){


            found = 1 ;

            printf("The element found in the position %d",i + 1);

            break;

        }
    }
        if(found == 0){
            printf("The element is not found");
        
    }
        return 0 ;
}