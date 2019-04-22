
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    printf("nhap vao so phan tu cua 2 mang : ");
    scanf("%d", &n);

    int a[n][n];
    for (i = 0; i < n; i++) {
        printf("\n ");
        for (j = 0; j < n; j++) {
            printf("nhap vao phan tu thu a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int s1 = 0, s2 = 0;
    for (i = 0; i < n; i++) {
        printf("\n \n");
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%4d", a[i][j]);
                s1 += a[i][j];
            }else printf("    ");
        }
    }
    printf("\n \n s1 = %d \n", s1);
    
    for (i = 0; i < n; i++) {
        printf("\n \n");
        for (j = 0; j < n; j++) {
            if (i + j == n-1) {
                printf("%4d", a[i][j]);
                s2 += a[i][j];
            }else printf("    ");
        }
    }
    printf("\n \n  s2 = %d \n", s1);
    printf("\n=====================end========================\n");
}


