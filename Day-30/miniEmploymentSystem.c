#include <stdio.h>

struct Employee{

    int id;
    char name[30];
    float salary;

};

int main(){

    struct Employee e[3];

    for(int counter=0;counter<3;counter++){


        scanf("%d%s%f",&e[counter].id,e[counter].name,&e[counter].salary);

    }

    printf("\n Employee count");

    for(int counter=0;counter<3;counter++){


        printf("%d %s %.2f count",e[counter].id,e[counter].name,e[counter].salary);

    }

    return 0;
}