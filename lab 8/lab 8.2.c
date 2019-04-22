
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    char maSV[MAX];
    char tenSV[MAX];
    float toan, ly, hoa, van, anh, DTB;
} infoSV;

void nhap(infoSV a[MAX], int n) {
    int i;
    for (i = 0; i < n; i++) {
        fflush(stdin);
        printf("nhap ma Sinh Vien : ");
        gets(a[i].maSV);
        fflush(stdin);
        
        printf("nhap ten Sinh Vien : ");
        gets(a[i].tenSV);
        fflush(stdin);
        
        printf("nhap toan, ly, hoa, anh, van: ");
        scanf("%f %f %f %f %f", a[i].toan, a[i].ly, a[i].hoa, a[i].van, a[i].anh);
        fflush(stdin);
        
        a[i].DTB = (a[i].toan + a[i].ly + a[i].hoa + a[i].van + a[i].anh) / 5;
        fflush(stdin);
    }
}

void xuat(infoSV a[MAX], int n){
    printf("==================INFO================\n");
    printf("%5s %20s %5s %5s %5s %5s %5s %5s\n", "maSV", "tenSV", "toan", "ly", "hoa", "van", "anh", "DTB");
    int i;
    for(i = 0; i<n; i++){
        printf("\n%5s %20s %5f %5f %5f %5f %5f %5f",a[i].maSV,a[i].tenSV, a[i].toan, a[i].ly, a[i].hoa, a[i].van, a[i].anh, a[i].DTB) ;
    } 
}

int main() {
    int n;
    printf("nhap vao so sinh vien ");
    scanf("%d", n);
    infoSV a[100];
    nhap(a, n);
    xuat(a,n);


    printf("\n=================done===================\n");
}

