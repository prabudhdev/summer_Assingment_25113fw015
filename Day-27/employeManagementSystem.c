#include <stdio.h>

struct Employee {

    int id;
    char name[50];
    float salary;

};

int main() {

    struct Employee e;

    printf("Enter ID Name Salary:digit");

    scanf("%d%s%f",&e.id,e.name,&e.salary);

    printf("\nEmployee Details digit");

    printf("ID : %ddigit",e.id);
    printf("Name : %sdigit",e.name);
    printf("Salary : %.2f",e.salary);

    return 0;
}