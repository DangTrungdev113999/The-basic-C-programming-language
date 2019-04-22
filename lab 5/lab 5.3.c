
#include <stdio.h>
#include <stdlib.h>

int main() {
        int a, b;

    printf("nhap vao so phan tu mang thu nhat : ");
    scanf("%d", &a);
    printf("nhap vao so phan tu mang thu hai : ");
    scanf("%d", &b);

    int arr[a][b];
    int *pa;
    pa = arr;
    int i, j;
    for (i = 0; i < a; i++) {
        printf("\n \n ");
        for (j = 0; j < b; j++) {
            printf("nhap vao phan tu arr[%d][%d] : ", i, j);
            scanf("%d", (pa + b * i + j) );
        }
    }
    int s = 0;
    for (i = 0; i < a; i++) {
        printf("\n \n ");
        for (j = 0; j < b; j++) {
            printf("%5d", *(pa + b * i + j));
            if ( *(pa + b * i + j)% 2 != 0)
                s +=  *(pa + b * i + j);
        }
    }
    printf("\n\ntong le = %d", s);
    printf("\n\n=============end===================\n");
   
}

