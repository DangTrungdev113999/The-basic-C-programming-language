
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao so nguyen co 6 chu so : ");
    scanf("%d", &n);

    int a, b, c, d, e, f;
    int max, min;

    a = (n -  (n % 100000)) / 100000;
    b = ((n % 100000)-(n % 10000)) / 10000;
    c = ((n % 10000) - (n % 1000)) / 1000;
    d = ((n % 1000) - (n % 100)) / 100;
    e = ((n % 100) - (n % 10)) / 10;
    f = n % 10;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;
    if (f > max) max = f;
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;
    if (f < min) min = f;
    printf("%d%d%d%d%d%d\n", a, b, c, d, e, f);
    printf("max = %d \nmin %d\n", max, min);
}

