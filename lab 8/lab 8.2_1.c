
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    char maDoiBong[5];
    char tenDoiBong[30];
    char fullName[30];

} doiBong;


void nhap(doiBong doibong[], int n ){
     int i,j,a;
    for (i = 0; i < n; i++) {
#define st doibong[i]
        fflush(stdin);
        printf("nhap vao info doi bong thu %d", i + 1);
        printf("\nNhap vao ma doi bong: ");
        gets(st.maDoiBong);
        fflush(stdin);
        printf("\nNhap vao ten doi bong: ");
        gets(st.tenDoiBong);
        fflush(stdin);

        printf("\nNhap vao so cau thu: ");
        scanf("%d", &a);
        fflush(stdin);
        for (j = 0; j < a; j++) {
            fflush(stdin);
            printf("\nNhap vao ten cau thu thu %d : ", j + 1);
            gets(doibong[j].fullName);
            fflush(stdin);
        }
        fflush(stdin);
        printf("------------------------------------------\n");
    }
}
    
void xuat(doiBong doibong[], int n){
     int i,j,a;
        printf("=====================thong tin cac doi bong===================\n");
    printf("%5s %30s %50s ", "Ma doi bong", "Ten doi bong", "danh sach ten cac cau thu");
    for (i = 0; i < n; i++) {
#define st doibong[i]
        printf("\n%5s %30s \n", st.maDoiBong, st.tenDoiBong);
        for (j = 0; j < a; j++){
            printf("%85s \n ",doibong[j].fullName );
        }
        }
}
    

int main() {
    int n;
    printf("nhap vao so doi bong ");
    scanf("%d", &n);
    doiBong doibong[n];

    nhap(doibong,n);
    xuat(doibong,n);




    printf("\n=================done===================\n");
}

