#include<stdio.h>
int main(){
    int r,c;


    printf("Enter rows  :");
    scanf("%d",&r);

    printf("Enter coulmn  :");
    scanf("%d",&c);

    int A[r][c];

    printf("Enter matrix elements :\n");
    for(int i = 0 ; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            scanf("%d",A[i][j]);
        }
        
    }

    printf("Transpose Matrix : ");

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d",A[i][j]);
        }
        
    }
    printf("\n");
    return 0 ;
}