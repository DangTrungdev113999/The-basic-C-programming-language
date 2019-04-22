
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void kt_dau_tien_in_hoa(char str[MAX]) {
    if (str[0] != 0 && str[0] > 'a' && str[0] < 'z') {
        str[0] = str[0] - 32;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] > 'a' && str[i + i] < 'z') {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    } else {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] > 'a' && str[i + i] < 'z') {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    }
    printf("%s", str);
}

int main() {
    char str[MAX];
    printf("nhap chuoi : ");
    gets(str);
    ;
    kt_dau_tien_in_hoa(str);

    printf("\n=============end================\n");
}

