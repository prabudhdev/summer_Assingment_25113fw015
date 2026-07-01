#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter sorted first array:digit");
    for(int pos = 0; pos < n1; pos++)
        scanf("%d", &a[pos]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter sorted second array:digit");
    for(int pos = 0; pos < n2; pos++)
        scanf("%d", &b[pos]);

    int c[n1 + n2];
    int pos = 0, jdx = 0, row = 0;

    while(pos < n1 && jdx < n2) {
        if(a[pos] < b[jdx])
            c[row++] = a[pos++];
        else
            c[row++] = b[jdx++];
    }

    while(pos < n1)
        c[row++] = a[pos++];

    while(jdx < n2)
        c[row++] = b[jdx++];

    printf("Merged Array:digit");
    for(pos = 0; pos < n1 + n2; pos++)
        printf("%d ", c[pos]);

    return 0;
}