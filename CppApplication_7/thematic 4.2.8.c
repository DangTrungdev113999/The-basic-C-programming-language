#include <stdio.h>
#include <stdlib.h>
#define    MAX 100

void nhap(int a[MAX], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[MAX], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
}

void XoaTaiViTri(int a[], int n) {

    int vitri;
    do {
        printf("\nnhap vao tri tri can xoa : ");
        scanf("%d", &vitri);
        if (vitri < 0 || vitri > n) {
            printf("\n nhap lai vi tri < n \n");
        }
    } while (vitri < 0 || vitri > n);

    for (int i = vitri; i < n; i++) {
        a[i] = a[i + 1];
        n--;
    }
    printf("mang sau khi xoa phan tu a[%d] la :\n", vitri);
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }

}

void ThemTaiViTri(int a[], int n) {
    int vitri;
    do {
        printf("\nnhap vao tri tri can them : ");
        scanf("%d", &vitri);
        if (vitri < 0 || vitri > n) {
            printf("\n nhap lai vi tri < n \n");
        }
    } while (vitri < 0 || vitri > n);
    
    int x;
    printf("nhap gia tri them : ");
    scanf("%d", &x);
    
    for (int i = n; i > vitri; i--) {
        a[i] = a[i - 1];
    }
    a[vitri] = x;
    n++;
    
    printf("\nmang sau khi them la : \n");
    for(int i = 0; i<n ; i++){
        printf("%4d",a[i] );
    }
}

int main() {
    int a[MAX];
    int n;
    do {
        printf("\nNhap so phan tu cua 2 mang  : ");
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
            printf("\nmoi ban nhap lai ");
        }
    } while (n < 1 || n > MAX);

    nhap(a, n);
    printf("cac phan tu cua mang la : \n");
    xuat(a, n);
//    printf("\n");
//    XoaTaiViTri(a, n);
    printf("\n");
    ThemTaiViTri(a, n);

    printf("\n==========end===============\n");
}