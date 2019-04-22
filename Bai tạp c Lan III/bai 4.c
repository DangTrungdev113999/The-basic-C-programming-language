#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao do cao tam giac : ");
    scanf("%d", &n);
    
    int i,j;
    for(i = 1; i<= n ; i++){
        printf("\n \n");
        for(j = (n - i + 1); j > 1; j--)
            printf("    ");
        for(j = 1; j <= i; j++)
            printf("*   ");
        for(j = 2; j<= i; j++)
            printf("*   ");
    }
    
    
    printf("\n\n=================end====================\n");
}

