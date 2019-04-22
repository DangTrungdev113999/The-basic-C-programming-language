#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    printf("nhap vao so phan tu cua mang : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("nhap vao phan tu thu %d : ", i);
        scanf("%d", &a[i]);
    }
    int k = 0;
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%d \n ", a[i]);
            k = 0;
            break;
        } else {
            k = 1;
        }
}
     if(k == 1) printf("khong co gia tri am trong mang \n \n");

}

