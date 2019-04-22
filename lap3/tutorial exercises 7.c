
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a, s;
    i = s = 1;
    printf("nhap a :");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        s *= i;
    }
    printf("%d\n", s);

}

