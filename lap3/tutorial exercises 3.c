
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int count = 0;

    for (i = 100; i >= 5; i--) {
        if (i % 5 == 0) {
            printf("%3d", i);
            ++count;
        }

    }
    printf("\n");
    printf("bien dem :%d", count);
}

