
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,  i, j;
    printf("nhap vao so phan tu mang thu nhat va thu 2 : ");
    scanf("%d", &n);

    int m[n][n];
    printf("=================================\n");
    do{
        // nhap cac phan tu
        for (i = 0; i < n; i++) {
            printf("\n");
            for (j = 0; j < n; j++) {
                printf("nhap vao phan tu cua mang m[%d][%d] : ", i, j);
                scanf("%d", &m[i][j]);
            }
        }
        
        // xuat cac phan tu duoi dang ma tran vuong roi trinh tong
        int tong = 0;
        printf("\ncac phan tu cua mang la : ");
        for (i = 0; i < n; i++) {
            printf("\n \n");
            for (j = 0; j < n; j++) {
                printf("%4d", m[i][j]);
                tong += m[i][j];
            }
        }
        printf("\n \n tong  = %d ", tong);

        printf("\n-----------------------------------------------\n");
        int tongBien = 0;
        // in ra duong bien cua ma tran vuong roi tinh tong
        for (i = 0; i < n; i++) {
            printf("\n \n");
            for (j = 0; j < n; j++) {
                if (i == 0 || i == n - 1) {
                    printf("%4d", m[i][j]);
                }
                if (i != 0 && i != n - 1) {
                    if (j == 0 || j == n - 1)
                        printf("%4d", m[i][j]);
                    else
                        printf("    ");
                }
                tongBien += m[i][j];
            }
        }
        printf("\n \n tong bien = %d", tongBien);
        
        printf("\n-----------------------------------------------\n");
        int tongCheoChinh = 0;
        // in ra duong cheo chinh roi tinh tong
        for(i = 0; i<n; i++){
            printf("\n \n");
            for(j=0; j<n; j++){
                if(i == j){
                    tongCheoChinh += m[i][j];
                    printf("%4d", m[i][j]);
                }else
                    printf("    ");
            }
        }
        printf("\n \n tong cheo chinh = %d", tongCheoChinh);
        
        printf("\n-----------------------------------------------\n");
        int tongCheoPhu = 0;
        //in ra duong cheo phu roi tinh tong
        for(i= 0; i<n; i++){
            printf("\n\n");
            for(j = 0; j<n; j++){
                if( i + j == n - 1) {
                    printf("%4d", m[i][j]);
                    tongCheoPhu += m[i][j];
                }else
                    printf("   ");
            }
        }
        printf("\n\n tong Cheo Phu = %d", tongCheoPhu);
        
    }while(n);
    printf("\n========================end==============================\n");
}

