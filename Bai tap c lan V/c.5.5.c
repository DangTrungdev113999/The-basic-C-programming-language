#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100 

int main() {
    char str[MAX];
    printf("nhap vao chuoi : ");
    fflush(stdin);
    gets(str);
    
    int i;
    int count = 0;
    printf("\nnhap ky tu can kiem tra : ");
    char x1, x = getchar();
    if(x >= 'a' && x <= 'z')
        x1 = x  -  32;

    for (i = 0; i <= strlen(str) - 1; i++) {
        if(str[i] == x || str[i] == x1 ) 
            count++;
    }
printf("%d", count);

        printf("\n======================end==========================\n");
        return 0;
}