#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,n;
    printf("nhap chieu cao : ");
    scanf("%d", &m);
    printf("nhap chieu dai :");
    scanf("%d", &n);
    
    int i,j;
    for(i = 1; i<= m; i++){
        printf("\n \n");
        for(j = 1; j<=n; j++){
            printf("*   ");
        }
    }
    
    printf("\n=================end====================\n");
}

