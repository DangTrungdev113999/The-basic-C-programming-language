#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("nhap n : ");
    scanf("%d", &n);
    int i, k =0;
    
    for(i = 1; i<= sqrt(n); i++){
        if(n%i  == 0)
            k =1;
        else
            k= 0;
    }
    if(k == 0) printf("%d la so nguyen to ", n );
    if(k == 1) printf("%d khong la so  nguyen to ", n );
    
    printf("\n=================end====================\n");
}

