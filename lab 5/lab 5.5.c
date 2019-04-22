
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("nhap vao so phan tu cua mang thu nhat : ");
    scanf("%d", &n);
    printf("nhap vao so phan tu cua mang thu hai : ");
    scanf("%d", &m);

    int i, j, a[n][m];
    int *pa;
    pa = a;
    do{
    for (i = 0; i < n; i++) {
        printf("\n \n ");
        for (j = 0; j < m; j++) {
            printf("Nhap vao phan tu a[%d][%d] : ", i, j);
            scanf("%d", pa + m * i + j);
        }
    }
    for (i = 0; i < n; i++) {
        printf("\n \n ");
        for (j = 0; j < m; j++) {
            printf("%5d", *(pa + m * i + j));

        }

    }
    int tongCheo = 0, tongBien = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i == j)
                tongCheo += *(pa + m * i + j);
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                tongBien += *(pa + m * i + j);
        }
    }
    printf("\n tong cheo chinh = %d", *(pa + m * i + j));
    printf("\n tong bien = %d", *(pa + m * i + j));
    }while(a[i][j != 0]);
    printf("\n\n=============end===================\n");
}

