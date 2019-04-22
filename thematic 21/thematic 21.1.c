
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("nhap vao a : ");
    scanf("%d", &a);
    printf("nhap vao b : ");
    scanf("%d", &b);

    int i;
    int s = 0, s1 = 0;
    if (a > b) {
        for (i = b + 1; i < a; i++) {
            s += i;
        }
        printf("s= %d\n\n", s);
    if (a < b) {
        for (i = a + 1; i < b; i++) {
            s1 += i;
        }
        printf("s1 = %d\n\n", s1);

        }

    }

}

