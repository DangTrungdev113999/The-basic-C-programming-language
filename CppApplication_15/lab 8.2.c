#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    int a[n];

    int i, j;
    for (i = 0; i < n; i++) {
        printf("nhap  a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nphan tu cua mang truoc khi sap xep la : ");
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
    int temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }

    printf("\nphan tu cua mang sau khi sap xep la : ");
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
    printf("\n=================done===================\n");
}


