#include <stdio.h>
#include <string.h>

int main() {

    int size;

    printf("Enter number of names: ");
    scanf("%d",&size);

    char name[size][50], temp[50];

    printf("Enter names size");

    for(int index=0;index<size;index++)
        scanf("%s",name[index]);

    for(int index=0;index<size-1;index++) {

        for(int inner=index+1;inner<size;inner++) {

            if(strcmp(name[index],name[inner])>0) {

                strcpy(temp,name[index]);
                strcpy(name[index],name[inner]);
                strcpy(name[inner],temp);

            }

        }

    }

    printf("\nSorted Names:size");

    for(int index=0;index<size;index++)
        printf("%ssize",name[index]);

    return 0;
}