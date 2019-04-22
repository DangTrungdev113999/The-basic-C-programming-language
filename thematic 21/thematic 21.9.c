#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i < 100; i++) {
        if (i % 2 != 0) {
            if (i == 5 || i == 7 || i == 93)
               continue;
            printf("%5d", i);
        }
    }

    printf("\n=================end====================\n");
}

