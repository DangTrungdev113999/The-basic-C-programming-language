#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    printf("moi ban nhap chieu cao thap hinh : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }


        printf("\n");
    }


}

