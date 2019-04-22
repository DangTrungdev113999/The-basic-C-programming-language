

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    int choose;

    printf("\n==========MENU===========\n");
    printf("1. tong 3 so\n ");
    printf("2. tinh trung binh 3 so \n");
    printf("3. Tìm so lon nhat trong 3 chu so\n");
    printf("4. thoat chuong trinh \n");
    printf("\n moi ban nhap \n");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("moi ban nhap 3 so : ");
            scanf("%d%d%d", &num1, &num2, &num3);
            printf("%d + %d + %d = %d", num1, num2, num3, num1 + num2 + num3);
            break;
        case 2:
            printf("moi ban nhap 3 so : ");
            scanf("%d%d%d", &num1, &num2, &num3);
            printf("average = %d", (num1 + num2 + num3) / 3);
            break;
        case 3:
            printf("moi ban nhap 3 so : ");
            scanf("%d%d%d", &num1, &num2, &num3);
            int max = num1;
            if (num2 > max) max = num2;
            if (num3 > max) max = num3;
            printf("max = %d", max);
            break;
        default:
            printf(" ban da thoai chuong trinh ");
            break;
            }
    printf("\n=============end==============\n");
}

