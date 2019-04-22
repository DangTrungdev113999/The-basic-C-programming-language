#include <stdio.h>
#include <stdlib.h>

int thuanNghich(int i) {
    int tg = i;
    int temp = 0;
    while (i > 0) {
        temp = temp * 10 + i % 10;
        i /= 10;
    }
    return (temp == tg);
}

int chia10(int i) {
    int sum = 0;
    while (i) {
        sum += i % 10;
        i /= 10;
    }
    return (sum % 10 == 0);
}

int main() {
    int i;
    for (i = 100000; i <= 999999; i++) {
        if (thuanNghich(i) && chia10(i))
            printf("%10d", i);
    }
    printf("\n\n=================end====================\n");
}

