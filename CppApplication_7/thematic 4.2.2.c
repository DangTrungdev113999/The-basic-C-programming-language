#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhap(int *pa, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("nhap vao a[%d] ", i);
        scanf("%d", (pa + i) );
    }
}

void xuat(int *pa, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%4d", *(pa + i));
    }
}

void sapSep(int *pa, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 1; j < n; j++) {
            int temp;
            if (*(pa + j ) > *(pa + i)) {
                temp = *(pa + i);
                *(pa + i) = *(pa + j );
                *(pa + j ) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("nhap vao so phan tu cua mang : ");
    scanf("%d", &n);
    int a[n];
    int *pa;
    pa = a;
    nhap(pa, n);
    xuat(pa, n);
    printf("\ncac phan tu cua mang sau khi sap sep giam dan la : ");
    sapSep(pa, n);
    xuat(pa, n);


    printf("\n======================end==========================\n");
}


