#include <stdio.h>
#include <stdlib.h>

int kiemTra(int a) {
    int i;
    int s = 0;
    for (i = 1; i <= a; i++) {
        if (a % i == 0)
            s += i;
    }
    return s - a;
}

void hienThi(int b) {
    if (kiemTra(b) == b)
        printf("%d la so hoan hao\n", b);
    else
        printf("%d khong la so hoan hao\n ", b);
}

int main() {
    int n;
    do {
        printf("\n---------------------------------------\n");
        printf("nhap vao n : ");
        scanf("%d", &n);

        hienThi(n);
    } while (n != 0);

    printf("\n==================end==================\n");
}


