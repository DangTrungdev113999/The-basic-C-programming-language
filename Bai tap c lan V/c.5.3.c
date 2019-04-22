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
    int n = strlen(str);
    int k = 0;
    for (i = 0; i <= n / 2; i++) {

        if (str[i] != str[n - 1 - i]) {
            k =1;
        }else k = 0;
    }
    fflush(stdin);
    if(k ==0) printf(" la so thuan nghich");
    else printf("%c k la so thuan nghich");
            
    printf("\n======================end==========================\n");
    return 0;
}
