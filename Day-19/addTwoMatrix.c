#include<stdio.h>
int main(){
    int row , coulmn;

    printf("Enter the number of rows and coulmn of a  matrix :");
    scanf("%d",&row,&coulmn);


    int arr1[row][coulmn] , arr2[row][coulmn] , arr3[row][coulmn];


    printf("Enter the frist matrix");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            scanf("%d",&arr1[row][coulmn]);
        }
        
    }


    printf("Enter the second number :");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            scanf("%d",arr2[row][coulmn]);
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }

    printf("Sum Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            printf("%d",arr3[i][j]);
        }
       
    }
     printf("\n");
     return 0;
    
}