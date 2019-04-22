
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    printf("Enter the number one : ");
    scanf("%f", &num1);
    printf("Enter the number two : ");
    scanf("%f", &num2);
    printf("Enter the number three");
    scanf("%f", &num3);

    if (num1 < 0)
        printf("%d ", abs(num1));
    else
        printf("%f ", num1);
    if (num2 < 0)
        printf("%d ", abs(num2));
    else
        printf("%f ", num2);
    if (num3 < 0)
        printf("%d ", abs(num3));
    else
        printf("%f ", num3);



}

