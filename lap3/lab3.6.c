
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int j;

    int choose;
    printf("moi ban nhap tu 2 den 9 : ");
    scanf("%d", choose);

    switch (choose) {
        case 2:
            i = 2;
            for (j = 1; j <= 10; j++) {
                printf("%d * %d = %d \n", i, j, i * j);
            }
            break;

        case 3:
            i = 3;

            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;

        case 4:
            i = 4;
            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;
            
        case 5:
            i = 5;
            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;

        case 6:
            i = 6;
            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;

        case 7:
            i = 7;
            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;

        case 8:
            i = 8;
            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;

        case 9:
            i = 9;
            for (j = 1; j <= 10; j++)
                printf("%d * %d = %d \n", i, j, i * j);
            break;

        default:
            printf("moi ban nhap lai \n");
            break;
    }

}

