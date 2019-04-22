#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhap(int *pa, int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        printf("\n \n");
        for (j = 0; j < n; j++) {
            printf("nhap vao a[%d][%d]", i, j);
            scanf("%d", (pa + m * i + j));
        }
    }
}

void xuat(int *pa, int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        printf("\n\n");
        for (j = 0; j < n; j++) {
            printf("%4d", *(pa + m * i + j));
        }
    }
}

int main() {
    int m, n;
    printf("nhap vao so phan tu mang thu nhat : ");
    scanf("%d", &m);
    printf("nhap vao phan tu mang thu hai:  ");
    scanf("%d", &n);

    int a[m][n];
    int *pa = a;
    nhap(pa, m, n);
    printf("\n cac phan tu cau mang la : ");
    xuat(pa, m, n);


    printf("\n======================end==========================\n");
}


