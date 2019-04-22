#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int n;
    printf("nhap vao so nguyen duong n :");
    scanf("%d", &n);
    
    if(n%2==0) printf("n la so chan\n");
    else            printf("n la so le\n");
    
    printf("---------------------------------------\n");
    if(n%3==0) printf("n chia het cho 3\n");
    if(n%5==0) printf("n chia het cho 5\n");

printf("\n");    
}

