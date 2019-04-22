

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2;
    int i, s;
    printf("nhap vao 2 so : ");
    scanf("%d%d", &number1, &number2);
    
    if (number1 < number2) {
        for (i = number1; i < number2; i++)
            if (i % 2 != 0) {
                printf("%5d", i);
                s += i;
            }

    } else {
        for (i = number2; i < number1; i++)
            if (i % 2 != 0) {
                printf("%5d", i);
                s += i;
            }
    }
    printf("\ns = %d \n", s);


}

