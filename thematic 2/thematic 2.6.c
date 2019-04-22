
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choose;
    printf("\n======================MENU===========================\n");
    printf("1. kiem tra tam gia can , deu, vuong va tinh chu vi dien tich \n");
    printf("2. kiem tra tu giac la vuong , chu nhat va tinh chu vi dien tich \n");
    printf("========================================================\n");

    do {
        printf("moi ban chon : ");
        scanf("%d", &choose);

        if (choose == 1) {
            int a, b, c;
            float s, C, p;
            printf("\n nhap 3 canh cua tam giac : ");
            scanf("%d%d%d", &a, &b, &c);
            printf("----------------------\n");

            if (a == b && b == c)
                printf("tam giac deu \n");
            else if (a == b || a == c || b == c)
                printf("tam giac can \n");
            else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
                printf("tam gac vuong \n");
            else
                printf("tam giac thuong \n");

            p = (a + b + c) / 2;
            s = sqrt(p * (p - a) * (p - b) * (p - c));
            C = a + b + c;
            printf("s = %f \n", s);
            printf("c = %f \n", C);
        }

        if (choose == 2) {
            int a, b, c, d;
            float S, C, p;
            printf("\n nhap vao 4 canh cua tu giac : ");
            scanf("%d%d%d%d", &a, &b, &c, &d);
            printf("------------------------\n");

            if (a == b && b == c && c == d)
                printf("tu giac la hinh vuong \n");
            else if (sqrt(a * a + b * b) == sqrt(d * d + c * c) || sqrt(a * a + c * c) == sqrt(b * b + d * d) || sqrt(a * a + d * d) == sqrt(c * c + b * b))
                printf("tu giac la hinh chu nhat \n ");
            else
                printf("day la tu giac \n");
            C = a + b + c + d;
            p = (a + b + c + d) / 2;
            S = sqrt((p - a)*(p - b)*(p - c)*(p - d));
            printf("S = %f \n", S);
            printf("C = %f \n", C);
        }
        if (choose > 2 || choose < 0)
            printf("\n I LOVE YOU \n");
        printf("\n=============Continue============\n");

    } while (choose != 0);
    printf("ban da thoat chuong trinh ");
    printf("\n=============end============\n");
}

