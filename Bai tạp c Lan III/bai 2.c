#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,n;
    printf("nhap vao chieu cao : ");
    scanf("%d", &m);
    printf("nhap vao chieu dai : ");
    scanf("%d", &n);
    
    int i,j;
    for(i = 1; i<= m; i++){
        printf("\n \n ");
        for(j = 1; j <= n; j ++){
            if(i ==1 || i == m )
                printf("*   ");
            if(i != 1 && i != m){
                if(j == 1 || j == n)
                    printf("*   ");
                else
                    printf("    ");
            }
                
        }
    }
    
    printf("\n=================end====================\n");
}

