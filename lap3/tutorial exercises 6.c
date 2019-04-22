

#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, j, a;
    printf("nhap vao so a : ");
    scanf(" %d ", &a);

    for (i = 1; i <= a;  i++) {
        for (j = 1;  j <= i; j++) {
            printf(" * ");
        }
        printf(" \n ");
    }
}

