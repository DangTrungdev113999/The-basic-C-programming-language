
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a, s1, s0, s;
    s1 = 1;
    s0 = 1;
    
    printf(" nhap vao so a : ");
    scanf(" %d ", &a);
    printf("Fibonaci cua %d la \n", a);
// lam ra nhap de hieu hon
    for (i = 2; i < a; i++) {
        s = s0 + s1;
        s0 = s1;
        s1 = s;
        printf("%d", s);


    }


}

