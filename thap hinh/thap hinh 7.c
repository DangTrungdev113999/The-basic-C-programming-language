
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    printf("Enter the height of the ... : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n) printf("* ");
            if (i != 1 && i != n ){
                if (j == 1|| j==n )
                    printf("* ");
                else printf("  ");
            }

        }

        printf("\n");
    }

}

