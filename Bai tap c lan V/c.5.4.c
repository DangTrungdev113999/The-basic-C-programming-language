#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100 

int main() {
    char str[MAX];
    printf("nhap vao day so kiem tra : ");
    fflush(stdin);
    gets(str);

    int i;

    for (i = 0; i <= strlen(str) - 1; i++) {
        if (i % 2 != 0) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] -= 32;
            printf("%c", str[i]);
        }
        if (i % 2 == 0) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            printf("%c", str[i]);
        }

    }
        printf("\n======================end==========================\n");
        return 0;
}