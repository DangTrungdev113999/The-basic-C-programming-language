#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao n : ");
    scanf("%d", &n);
    int i, j;

    for (i = 1; i <= n; i++) {
        printf("\n \n ");

        for (j = n - i; j >= 1; j--) {
            printf("    ");
        }

        for (j = i; i >= 1; j--) {
            printf("%4d", j);
        }

    
    }


    printf("\n=================end====================\n");
}

