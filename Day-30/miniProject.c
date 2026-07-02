#include <stdio.h>

struct Student{

    int roll;
    char name[30];
    float marks;

};

int main(){

    struct Student s[5];

    printf("Enter Details digit : ");

    for(int iter=0;iter<5;iter++)
        scanf("%d%s%f",&s[iter].roll,s[iter].name,&s[iter].marks);

    printf("\nStudent Records digit");

    for(int iter=0;iter<5;iter++){

        printf("Roll : %d digit",s[iter].roll);
        printf("Name : %s digit",s[iter].name);
        printf("Marks : %.2f digit digit",s[iter].marks);

    }

    return 0;
}