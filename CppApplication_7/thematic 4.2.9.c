#include <stdio.h>
#include <stdlib.h>
#define    MAX 100

void tanSuat(int a[], int n) {
    int k = 0,x;
    printf("nhap vao gai tri can kiem tra : ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) 
            k++;
    }
    if(k == 0) printf("khong co gia tri %d trong mang ", x);
    else printf("tan xua cua %d trong mang la %d", x,k);
}

    int main() {
        int a[MAX];
        int n;
        printf("nhap n :");
        scanf("%d", &n);
        int i;
        for (i = 0; i < n; i++) {
            printf("a[%d] = ", i);
            scanf("%d", &a[i]);
        }
        printf("Cac phan tu cau mang la : ");
        for (i = 0; i < n; i++) {
            printf("%4d", a[i]);
        }
        printf("\n");
        tanSuat(a, n);


        printf("\n==========end===============\n");
    }