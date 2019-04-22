
#include <stdio.h>
#include <stdlib.h>

void main() {
    int array[5];
    int i;
    int sumOdd = 0, sumEven = 0;
    for (i = 0; i < 5; i++) {
        printf("nhap phan tu mang thu %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("can phan tu chan trong mang la : ");
    for (i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            sumEven += array[i];
            printf("%4d ", array[i]);
        }
    }
    printf("\ncan phan tu le trong mang la : ");
    for (i = 0; i < 5; i++) {
        if (array[i] % 2 != 0) {
            sumEven += array[i];
            printf("%4d ", array[i]);
        }

    }
    printf("\ntong chan = %d \n", sumEven);
    printf("tong le = %d \n", sumOdd);

}


