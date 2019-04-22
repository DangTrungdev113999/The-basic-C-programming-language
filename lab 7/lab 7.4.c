#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);

    int i, j;
    int k = 0;
    printf("la : ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            for (j = 0; j < i; j++) {
                if (i % j != 0) {
                    k = 0;
                    printf("%4d", i);
                } else {
                    k = 1;
                }
            }
        }
    }
    if (k == 1) printf("khong co ");

    printf("\n=================done===================\n");
}
