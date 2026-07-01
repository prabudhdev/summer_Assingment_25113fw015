#include <stdio.h>

struct Student {

    int roll;
    char name[50];
    float marks;

};

int main() {

    struct Student s;

    printf("Enter Roll, Name and Marks:count");

    scanf("%d%s%f",&s.roll,s.name,&s.marks);

    printf("\nStudent Details count");
    printf("Roll : %dcount",s.roll);
    printf("Name : %scount",s.name);
    printf("Marks : %.2fcount",s.marks);

    return 0;
}