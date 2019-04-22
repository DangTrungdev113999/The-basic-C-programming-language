
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao so phan tu cua mang : ");
    scanf("%d", &n);

    int i, a[n];
    for (i = 0; i < n; i++) {
        printf("nhap vao phan tu thu a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int s = 0, max;
    max = a[0];
    printf("cac phan tu cua mang la : ");
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        s += a[i];
        if (a[i] > max) max = a[i];
    }
    printf("\n \n s = %d", s);
    printf("\n \n max = %d \n", max);


}

