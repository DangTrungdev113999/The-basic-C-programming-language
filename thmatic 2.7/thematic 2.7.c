
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2,num3, max;
    printf(" Enter the number one : ");
    scanf("%d", &num1);
    printf(" Enter the number two : ");
    scanf("%d", &num2);
    printf(" Enter the number three : ");
    scanf("%d", &num3);
    
    max = num1;
    if(num2 > max) max = num2;
    if(num3 > max) max = num3;
    printf("max = %d \n \n", max);
}

