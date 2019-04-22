#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

void nhap(int *pa, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("nhap vao a[%d][%d] : ", i, j);
            scanf("%d", (pa + n * i + j));
        }
        printf("\n\n");
    }
}

void xuat(int *pa, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", *(pa + n * i + j));
        }
        printf("\n\n");
    }
}

void sapXepCheoPhuGiam(int *pa, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(pa + n * j + (n - 1 - j)) > *(pa + n * i + (n - 1 - i))) {
                int temp = *(pa + n * i + (n - 1 - i));
                *(pa + n * i + (n - 1 - i)) = *(pa + n * j + (n - 1 - j));
                *(pa + n * j + (n - 1 - j)) = temp;
            }

        }
        printf("\n\n");
    }
}

int main() {
    int n;
    int a[MAX][MAX];
    do {
        printf("\nnhap vao n : ");
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
            printf("Ban da nhap sai, moi ban kiem tra lai");
        }
    } while (n < 1 || n > MAX);
    int *pa = a;
    nhap(pa, n);
    printf("\ncac phan tu cua mang la : \n");
    xuat(pa, n);
    sapXepCheoPhuGiam(pa, n);
    printf("\ncac phan tu cua mang sau khi la : \n");
    xuat(pa, n);

    printf("\n======================end==========================\n");
}


