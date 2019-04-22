
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, m;
    printf("nhap vao so phan tu cua mang thu nhat : ");
    scanf("%d", &n);
    printf("nhap vao so phan tu cua mang thu hai : ");
    scanf("%d", &m);

    int i, j, a[n][m];
    int *pa;
    pa = a;

    for (i = 0; i < n; i++) {
        printf("\n \n ");
        for (j = 0; j < m; j++) {
            printf("Nhap vao phan tu a[%d][%d] : ", i, j);
            scanf("%d", pa + m * i + j);
        }
    }

    printf("\nCac so nguyen to trong mang la : ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int a;
            for (a = 1; a <= sqrt(*(pa + m * i + j)); a++)
            if (a*a == *(pa + m * i + j))
                printf("%5d", *(pa + m * i + j));
        }
    }
    printf("\n\n=============end===================\n");
}

