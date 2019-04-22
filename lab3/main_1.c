

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, j, a;
    printf("nhap vao so a :");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++)
 {
            printf("# ");

        }


        printf("\n");
    }
    for (i = 1; i <= a - 1; a--) {
        for (j = 1; j <= a - 1; j++) {
            printf("# ");
        }
        printf("\n");
    }

}