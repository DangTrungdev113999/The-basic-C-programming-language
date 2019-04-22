#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <conio.h>
#define MAX 100

void NhapMaTran(int *pa, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nNhap vao a[%d][%d] : ", i, j);
            scanf("%d", (pa + n * i + j));
        }
    }
}

void XuatMaTran(int *pa, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", *(pa + n * i + j));
        }
        printf("\n\n"

                );
    }
}

void SapXepCheoChinhTangDan(int *pa, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(pa + n * j + j) < *(pa + n * i + i)) {
                int temp = *(pa + n * i + i);
                *(pa + n * i + i) = *(pa + n * j + j);
                *(pa + n * j + j) = temp;
            }
        }
    }
}

int main() {
    int a[MAX][MAX];
    int n;
    do {
        printf("\nNhap n : ");
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
            printf("\nSo phan tu khong hop le, xin kiem tra lai");
        }
    } while (n < 1 || n > MAX);
    int *pa = a;
    NhapMaTran(pa, n);
    XuatMaTran(pa, n);
    SapXepCheoChinhTangDan(pa, n);
    printf("\nSap Xep duong cheo chinh tang dan \n");
    XuatMaTran(pa, n);


    printf("\n======================end==========================\n");
}


