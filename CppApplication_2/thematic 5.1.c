#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int STT;
    char maSV[MAX];
    char fullName[MAX];

    struct monHoc {
        char maMon[MAX];
        char tenMon[MAX];
        int soTinChi;
        float diem, DTB;
    } b;
} info;

static STT = 1;

void nhap(info a[MAX], int n) {
    int i, j;
    int sum = 0;
    for (i = 0; i < n; i++) {
        a[MAX].STT = a[MAX].STT++;
        fflush(stdin);

        printf("\n\n----------Nhap vao thong tin sinh vien thu %d--------------- ", i + 1);
        printf("\nNhap vao ma SV: ");
        gets(a[i].maSV);3
        fflush(stdin);

        printf("\nNhap vao ten SV: ");
        gets(a[i].fullName);
        fflush(stdin);

        printf("\n------------nhap vao thong tin mon --------------");
        for (j = 0; j < 2; j++) {
            fflush(stdin);
            printf("\n----%d-----", j + 1);
            printf("\nNhap vao Ma mon thu %d: ", j + 1);
            gets(a[i].b.maMon);
            fflush(stdin);

            printf("\nNhap ten Mon thu %d: ", j + 1);
            gets(a[i].b.tenMon);
            fflush(stdin);

            printf("\nNhap so tin chi : ");
            scanf("%d", &a[i].b.soTinChi);
            fflush(stdin);


            printf("\nNhap diem : ");
            scanf("%f", &a[i].b.diem);
            fflush(stdin);
            a[i].b.DTB += a[i].b.diem;
            fflush(stdin);
        }
    }

}

void xuat(info a[MAX], int n) {
    printf("\n=====================INFO=========================\n");
    printf("%3s%5s %10s %7s %10s %7s %6s",
            "STT", "maSV", "TenSV", "Ma Mon", "Ten Mon", "STC", "Diem");
    int i, j;
    for (i = 0; i < n; i++) {
        printf("\n----------------------------------------------------------------");
        printf("\n%1d %5s %10s", a[i].STT, a[i].maSV, a[i].fullName);
        for (j = 0; j < 2; j++) {
            printf("\n%25s %10s %7d %7.1f\n"
                    , a[i].b.maMon, a[i].b.tenMon, a[i].b.soTinChi, a[i].b.diem);
        }
        printf("\n%46s %5.1f", "averrage", a[i].b.DTB / 2);
    }
    printf("\n----------------------------------------------------------------\n");
}

void timKiem(info a[MAX], int n, char tim[MAX]) {
    int i;
    printf("\nNhap vao maSV hoac tenSV: ");
    gets(tim);
    for (i = 0; i < n; i++) {
        if (strcmp(a[i].maSV, tim) == 0 || strcmp(a[i].fullName, tim) == 0) {
            printf("%3s%5s %10s %7s %10s %7s %6s",
                    "STT", "maSV", "TenSV", "Ma Mon", "Ten Mon", "STC", "Diem");
            int i, j;

            printf("\n\n%1d %5s %10s", a[i].STT, a[i].maSV, a[i].fullName);
            for (j = 0; j < 2; j++) {
                printf("\n%25s %10s %7d %7.1f"
                        , a[i].b.maMon, a[i].b.tenMon, a[i].b.soTinChi, a[i].b.diem);
            }
            printf("\n%46s %5.1f", "averrage", a[i].b.DTB / 2);

        }
    }
}

void maxAverage(info a[MAX], int n) {
    int i = 0, j;
    float max;
    max = a[i].b.DTB;
    for (i; i < n; i++) {
        if (a[i].b.DTB > max) {
            printf("%10s  %5.1f", a[i].fullName, a[i].b.DTB / 2);
        }

    }
}

void sapXep(info a[MAX], int n) {
    int i, j;
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (a[i + 1].b.DTB < a[i].b.DTB) {
                float temp = a[i].b.DTB;
                a[i].b.DTB = a[i + 1].b.DTB;
                a[i + 1].b.DTB = temp;
            }
        }
    }
}

int main() {
    info a[MAX];
    int n;
    char tim[MAX];
    printf("\nNhap vao so SV: ");
    scanf("%d", &n);
    nhap(a, n);
    xuat(a, n);
    printf("\ntim kiem SV ");
    timKiem(a, n, tim);
    printf("\n\nSinh vien co diem trung binh cao nhat: ");
    maxAverage(a, n);
    printf("\n\nSinh vien sau khi duoc sap xep theo diem trung binh ");
    sapXep(a, n);
    xuat(a, n);


    printf("\n============================done======================\n");
}