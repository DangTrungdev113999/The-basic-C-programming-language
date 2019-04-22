#include <stdio.h>
#include <stdlib.h>


int main( ) {
    int a,b,i,j;
    printf("nhap a : ");
    scanf("%d" , &a);
    printf("nhap b :");
    scanf("%d", &b);
    
    for (i = 1; i <= a; i++){
        for(j= 1; j <= b; j++){
            printf(" * ");
        }
        printf("\n");
    }

}

