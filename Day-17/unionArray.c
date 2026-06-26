#include<stdio.h>
int main(){
    int a[] = {1,2,3} , b[] =  {2,3,4};
    int n1 = 3, n2 = 3;
    printf("Union : ");
    for(int i = 0 ; i < n1 ;i++){
        printf("%d",a[i]);
    }
    for(int i = 0 ; i < n2 ; i++){
        int found = 0;
        for(int j = 0 ; j < n1 ; j++){
            if(b[i] == a[j]){
                found = 1;
            }
            if(!found){
                printf("%d" , b[i]);
            }
        }
    }
    return 0 ;
}