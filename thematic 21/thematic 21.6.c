#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao so nguyen duong n : ");
    scanf("%d", &n);

    printf("\n-------------------------------------------------\n");
    int i;
    int tongUoc = 0;
    printf("cac uoc cua %d la : ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%5d", i);
            tongUoc += i;
        }
    }
    printf("\n tong uoc = %d", tongUoc);

    printf("\n-------------------------------------------------\n");
    int tichUoc = 1;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            tichUoc *= i;
    }
    printf("tich uoc = %d", tichUoc);

    printf("\n-------------------------------------------------\n");
    int count = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    printf("%d co %d uoc", n, count);

    printf("\n-------------------------------------------------\n");
    int tongUocLe = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0)
            tongUocLe += i;
    }
    printf("tong uoc le = %d", tongUocLe);

    printf("\n-------------------------------------------------\n");
    int tongUocChan = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0)
            tongUocChan += i;
    }
    printf("tong uoc chan = %d", tongUocChan);

    printf("\n-------------------------------------------------\n");
    int maxLe = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            if (i > maxLe)
                maxLe = i;
        }
    }
    printf("uoc le lon nhat la : %d\n", maxLe);
    printf("cac uoc cua uoc le lon nhat la : ");
    for (i = 1; i <= maxLe; i++) {
        if (maxLe % i == 0)
            printf("%d ", i);
    }

    printf("\n-------------------------------------------------\n");
    int maxChan = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            if (i > maxChan)
                maxChan = i;
        }
    }
    printf("uoc chan lon nhat la : %d\n", maxChan);
    printf("cac uoc cua uoc chan lon nhat la : ");
    for (i = 1; i <= maxChan; i++) {
        if (maxChan % i == 0)
            printf("%d ", i);
    }
    printf("\n-------------------------------------------------\n");
}

