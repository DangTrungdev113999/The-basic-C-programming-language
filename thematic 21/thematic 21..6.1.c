#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("========= MENU CHUONG TRINH ============\n");
    printf("1. Nhao vao so n lon hon 1 :\n");
    printf("2. In ra danh sach cac so nho hon n : \n");
    printf("3. Tinh tong cac so nho hon n : \n");
    printf("4. Tim cac so chia het cho 3 va 5 : \n");
    printf("5. Tinh tong cac so chia het cho 2 : \n");
    printf("6. Thoat chuong trinh : \n");
    int chosse;


    do {
        printf("\n=================\n");
        printf("moi ban chon : ");
        scanf("%d", &chosse);
        printf("=================\n");

        switch (chosse) {
                int n;
            case 1:
                while (n < 1) {
                    printf("nhap vao n lon hon 1 : ");
                    scanf("%d", &n);
                }
                break;

                int i;
            case 2:
                while (n < 1) {
                    printf("nhap vao n lon hon 1 : ");
                    scanf("%d", &n);
                }
                printf("danh sach cac so nho hon %d la : ", n);
                for (i = 0; i < n; i++)
                    printf("%2d", i);
                break;

                int tong = 0;
            case 3:
                while (n < 1) {
                    printf("nhap vao n lon hon 1 : ");
                    scanf("%d", &n);
                }
                for (i = 0; i < n; i++)
                    tong += i;
                printf("tong cac so nho hon %d =  %d ", n, tong);
                break;

            case 4:
                while (n < 1) {
                    printf("nhap vao n lon hon 1 : ");
                    scanf("%d", &n);
                }
                printf("cac so chia het cho 3 la : ");
                for (i = 1; i <= n; i++) {
                    if (i % 3 == 0)
                        printf("%3d", i);
                }

                printf("\ncac so chia het cho 5 la : ");
                for (i = 1; i <= n; i++) {
                    if (i % 5 == 0)
                        printf("%3d", i);
                }
                break;

                int sum = 0;
            case 5:
                while (n < 1) {
                    printf("nhap vao n lon hon 1 : ");
                    scanf("%d", &n);
                }
                for (i = 1; i < n; i++) {
                    if (i % 2 == 0)
                        sum += i;
                }
                printf("tong cac so nho hon n va chia het cho 2 la : %d ", sum ) ;
                break;

            default:
                printf("moi ban nhap lai : ");
                break;

        }

    } while (chosse != 6);

    printf("\n-------------------------BAN DA THOAT CHUONG TRINH------------------------\n");
}

