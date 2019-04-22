#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    printf("Enter the number one : ");
    scanf("%f", &num1);
    printf("Enter the number two : ");
    scanf("%f", &num2);

    if (num1 > 0 && num2 > 0)
        printf("hai so cung dau");
    if (num2 < 0 && num1 < 0)
        printf("hai so cung dau");
    if (num1 > 0 && num2 < 0)
        printf("hai so khac dau");
    if (num2 < 0 && num2 > 0)
        printf("hai so khac dau");
    
    printf("\n===============end===============\n");
}

