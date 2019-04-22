#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    do {
    printf("nhap vao a : ");
    scanf("%d", &a);
    printf("nhap vao b : ");
    scanf("%d", &b);
    int i, tongLe, tongChan;
    
        for (i = a + 1; i < b; i++) {
            if (i % 2 == 0) tongChan += i;
            if (i % 2 != 0) tongLe += i;
        }
        printf("\n\ntong chan = %d \n\n", tongChan);
        printf("tong le = %d \n\n", tongLe);
    } while (b < a || b == a + 1 || b == a - 1);

}