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

void sapXepDongTangDan(int *pa, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(pa + n * i + j) < *(pa + n * i + (  ) )) {
                int temp = *(pa + n * i +( ));
                *(pa + n * i + (  )) = *(pa + n * i + j);
                *(pa + n * i + j) = temp;
            }
        }
        printf("\n\n");
    }

}

int main() {
    int a[MAX][MAX];
    int n;
    do {
        printf("\nnhap n : ");
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
            printf("\n Ban da nhap sai, moi ban kiem tra lai ");
        }
    } while (n < 1 || n > MAX);
    


    int *pa = a;
    nhap(pa, n);
    printf("\nCac phan tu cua mang la : \n");
    xuat(pa, n);
    sapXepDongTangDan(pa, n);
    printf("\nCac phan tu cua mang sau khi sap xep la :\n ");
    xuat(pa, n);

    printf("\n======================end==========================\n");
}


