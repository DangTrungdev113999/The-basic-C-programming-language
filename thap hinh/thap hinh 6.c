#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    printf("moi ban nhap do dai thap hinh : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = (n - i); j >= 1; j--) {
            printf(" ");
        }

        for (j = i ; j >= 2; j--) {
            printf("%d", j);
        }

        printf("1");

        for (j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

}

