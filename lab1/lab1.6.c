#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b;
    int sum, tru, nhan, chia;
    
    printf("nhap vao 2 so nguyen: ");
    scanf("%d%d", &a, &b);
    
    printf("**************************************\n");
    printf("tong 2 so nguen la : %d+%d=%d \n", a, b, sum = a+ b );
    printf("hieu 2 so nguyen la: %d-%d=%d \n",a, b,  tru = a - b);
    printf("tich hai so nguen la: %d*%d=%d \n",a, b,  nhan = a*b);
    printf("thuong hai so nguyen la : %d/%d=%d \n",a, b,  chia = a/b);
}

