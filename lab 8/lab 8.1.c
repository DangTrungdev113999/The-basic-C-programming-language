#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char code[5];
    char fullName[30];
    float toan, ly, hoa, sum;
} THISINH;

int main() {
    int i, n;
    printf("nhap vao so luong hoc sinh: ");
    scanf("%d", &n);
    THISINH info[n];

    for (i = 0; i < n; i++) {
        fflush(stdin);
        printf("\nnhap vao info st%d", i + 1);

        printf("\nenter  code: ");
        gets(info[i].code);

        printf("\nEnter full Name: ");
        gets(info[i].fullName);

        printf("\nEnter math, physical, chemistry: ");
        scanf("%f%f%f", &info[i].toan, &info[i].ly, &info[i].hoa);
        fflush(stdin);
    }

    printf("\n =====================================INFO=================================================\n");
    printf("%10s %30s %7s %7s %7s %7s", "Code", "fullName", "Toan", "Ly", "Hoa", "DiemTong");
    for (i = 0; i < n; i++) {
        printf("\n%10s %30s %7.2f %7.2f %7.2f %7.2f", info[i].code, info[i].fullName, info[i].toan, info[i].ly, info[i].hoa,
                info[i].toan + info[i].ly + info[i].hoa);
    }
    printf("\n");
}

