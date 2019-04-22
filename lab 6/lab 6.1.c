#include <stdio.h>
#include <stdlib.h>

int tong(int a, int b) {
    printf("nhap vao a : ");
    scanf("%d", &a);
    printf("nhap vao b :");
    scanf("%d", &b);
    return ("%d + %d = %d", a, b, a+b);

}

int main() {
    int a, b;
//    printf("nhap vao a : ");
//    scanf("%d", &a);
//    printf("nhap vao b :");
//    scanf("%d", &b);
    printf("tong hai so la : %d ", tong(a, b));

}

