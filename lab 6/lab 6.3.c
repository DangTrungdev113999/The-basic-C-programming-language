#include <stdio.h>
#include <stdlib.h>

int kiemTraAmDuong(int n) {
    if (n >= 0)
        return 1;
    else
        return 0;
}

void hienThi(int n) {
    if (kiemTraAmDuong(n) == 1)
        printf("%d la so duong ", n);
    else
        printf("%d la so am ", n);
}

int main() {
    int n;
    printf("nhap n : ");
    scanf("%d", &n);
    hienThi(n);
    printf("\n==================end==================\n");
}

