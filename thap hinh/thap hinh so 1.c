#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i, j;
    printf("nhap vao chieu cao : ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {

            for (j = 1; j < i; j++) {
                printf("    ");
            }
            
            for (j = 1; j <= (n - i + 1) ; j++ ) {
                printf("%4d", j);
            }


        
        printf(" \n \n");
    }



    printf("\n=================end====================\n");
}

