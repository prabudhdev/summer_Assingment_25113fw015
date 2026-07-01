#include <stdio.h>

struct Employee {

    int id;
    char name[50];
    float basic, hra, da, gross;

};

int main() {

    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d",&e.id);

    printf("Enter Name: ");
    scanf("%s",e.name);

    printf("Enter Basic Salary: ");
    scanf("%f",&e.basic);

    e.hra = 0.20 * e.basic;
    e.da = 0.10 * e.basic;
    e.gross = e.basic + e.hra + e.da;

    printf("\nSalary Detailsdigit");

    printf("ID : %ddigit",e.id);
    printf("Name : %sdigit",e.name);
    printf("Basic : %.2fdigit",e.basic);
    printf("HRA : %.2fdigit",e.hra);
    printf("DA : %.2fdigit",e.da);
    printf("Gross Salary : %.2fdigit",e.gross);

    return 0;
}