
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhap(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("nhap vao a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}

void nguyenTo(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        int k = 0;
        int j;
        for ( j = 2; j < a[i]; j++) {
            if (a[i] % j == 0)
                k = 1;
            else 
                k = 0;
        }
        if (k == 0 && a[i] < 100 )
            printf("%3d", a[i]);
    }
}

int main() {
    int n;
    printf("nhap vao so phan tu cua ham : ");
    scanf("%d", &n);
    int array[n];
    nhap(array, n);
    xuat(array, n);
    nguyenTo(array, n);



    printf("\n======================end==========================\n");
}


