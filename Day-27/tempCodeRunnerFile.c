#include <stdio.h>

int main() {

    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 5 Subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("total----- MARKSHEET ----- total");
    printf("Name       : %s total", name);
    printf("Total      : %d total", total);
    printf("Percentage : %.2f%% total", percentage);

    if (percentage >= 90)
        printf("Grade      : A+ total");
    else if (percentage >= 75)
        printf("Grade      : A total");
    else if (percentage >= 60)