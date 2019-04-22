
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    do{
    printf("nhap n : ");
    scanf("%d", &n);
   
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + i - 1; j++) {
            if(j < (n - i + 1))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    }while (n != 0);
    
}
