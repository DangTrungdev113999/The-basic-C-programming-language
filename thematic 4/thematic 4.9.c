

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("================MENU===================\n");
    printf("1. Nhap so phan tu mang va gia tri cho cac phan tu. \n");
    printf("2. in mang vua nhap. \n");
    printf("3. In gia tri mang voi cac phan tu ow vi tri bien. \n");
    printf("4. Tinh tong cac gia tri phan tu tren duong cheo chinh. \n");
    printf("5. tinh tong gia tri cac duong cheo phu. \n");
    printf("6. Tinh tong cac phan tu tren duong bien. \n");
    printf("7. Thoat. \n");
    printf("\n Moi ban chon :  ");

    int a, b;
    int n;
    int tongCheoChinh = 0, tongCheoPhu = 0, tongBien = 0;
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("nhap vao phan tu mang thu nhat : ");
            scanf("%d", &a);
            printf("nhap vao phan tu mang thu hai : ");
            scanf("%d", &b);
            int array[a][b];
            int i, j;
            for (i = 0; i < a; i++) {
                printf("\n");
                for (j = 0; j < b; j++) {
                    printf("nhap phan tu mang thu array[%d][%d] : ", i, j);
                    scanf("%d", &array[i][j]);
                }
            }
            break;

        case 2:

            for (i = 0; i < a; i++) {
                printf("\n \n");
                for (j = 0; j < b; j++) {
                    printf("%4d", array[i][j]);
                }
            }
            break;

        case 3:
            for (i = 0; i < a; i++) {
                printf("\n \n");
                for (j = 0; j < b; j++) {
                    if (i == 0 || i == a - 1)
                        printf("%4d", array[i][j]);
                    else
                        printf("    ");
                    if (i != 0 && i != a - 1) {
                        if (j == 0 || j == b - 1)
                            printf("%4d", array[i][j]);
                        else
                            printf("    ");
                    }
                }

            }
            break;

        case 4:
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    if (i == j)
                        tongCheoChinh += array[i][j];
                }
            }
            printf("tong cheo chinh = %d", tongCheoChinh);
            break;

        case 5:
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    if (i + j == a - 1 || i + j == b - 1)
                        tongCheoPhu += array[i][j];
                }
            }
            printf("tong cheo chinh = %d", tongCheoPhu);
            break;

        case 6:
            for (i = 0; i < a; i++) {
                printf("\n \n");
                for (j = 0; j < b; j++) {
                    if (i == 0 || i == a - 1);
                    if (i != 0 && i != a - 1)
                        if (j == 0 || j == b - 1);

                    tongBien += array[i][j];

                }
            }
            printf("tong cheo phu = %d", tongBien);
            break;
        case 7:
            break;
        default:
            printf("Moi ban nhap lai : ");
            break;
    }
    printf("\n===============XXX================\n");
}

