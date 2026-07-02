#include <stdio.h>

int main(){

    int items[100],total,ch,combined=0;

    printf("Enter size: ");
    scanf("%d",&total);

    for(int idx=0;idx<total;idx++)
        scanf("%d",&items[idx]);

    printf("1.Display\n2.Sum total");
    scanf("%d",&ch);

    switch(ch){

    case 1:
        for(int idx=0;idx<total;idx++)
            printf("%d ",items[idx]);
        break;

    case 2:
        for(int idx=0;idx<total;idx++)
            combined+=items[idx];

        printf("Sum=%d",combined);
        break;
    }

    return 0;
}