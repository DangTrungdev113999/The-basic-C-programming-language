
#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2, sum;
    
    printf("nhap vao 2 so nguyen duong : ");
    scanf("%d%d", &num1, &num2);
    
    sum = num1 + num2;
    printf("sum = %d \n", sum);
    
    if(sum % 2 == 0 ) printf("sum is even number \n");
    else                     printf("sum is odd number \n");
    
}

