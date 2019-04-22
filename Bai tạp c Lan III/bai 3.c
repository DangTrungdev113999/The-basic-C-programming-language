#include <stdio.h>
#include <stdlib.h>

int main() {
    int h;
    printf("nhap vao do cao : ");
    scanf("%d", &h);
    
    int i,j;
    for(i = 1; i <= h; i ++){
        printf("\n \n ");
        for(j = 1; j <= i; j++)
            printf("*   ");
    }
    
    printf("\n\n=================end====================\n");
}

