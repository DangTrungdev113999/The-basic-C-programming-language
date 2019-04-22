
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    printf("nhap n : ");
    scanf("%d", &n);
    
    for(i=1 ; i<=n; i++){
        
        for(j = 0; j<i; j++){
            printf(" ");
        }
        for( j = (n - i+1) ; j>=1; j-- ){
            printf("*");
        }
        printf("\n");      
    }
           
    

}

