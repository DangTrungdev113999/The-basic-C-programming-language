#include <stdio.h>
#include <stdlib.h>

int main() {
    int month, year;
    printf(" Moi ban nhap vao thang :");
    scanf("%d",&month);
    printf(" Moi ban nhap vao nam :");
    scanf("%d", &year);

    if (month > 0 && month <= 12 && year > 0) {
     
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("thang %d cua nam %d co 31 ngay \n", month, year);
                break;
            case 6:
            case 9:
            case 11:
            case 4:
                 printf("thang %d cua nam %d co 30 ngay \n", month, year);
                break;
            case 2:
                if(year % 4== 0) printf("thang 2 cua nam %d co 28 ngay\n", year);
                else                    printf("thang 2 cua nam %d co 29 ngay\n", year);
                break;
        }

    } else {
        printf("ban nhap sai thang/nam. \n");
    }
    printf("\n==============end=============\n");

}

