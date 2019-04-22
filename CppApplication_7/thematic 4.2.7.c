#include <stdio.h>
#include <stdlib.h>
# define    MAX 100
void nhap(int a[MAX][MAX], int n){
    for(int i = 0; i<n; i++){
        for( int j = 0; j< n; j++){
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n\n");
    }
}

void xuat(int a[MAX][MAX], int n){
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n\n");
    }
}

void sapXep(int a[MAX][MAX], int n){
    for(int k = 0; k<n; k++){
        for(int i = 0; i< n; i++){
            for(int j =  n- 1; j > i; j--){
                
                if(k%2 == 0)
                if (a[k][j] < a[j-1][k]){
                    int temp = a[k][j-1];
                    a[k][j-1] = a[k][j] ;
                    a[k][j]  = temp;
                }
                
                if(k%2 != 0)
                if (a[k][j] > a[j-1][k]){
                    int temp = a[k][j-1];
                    a[k][j-1] = a[k][j] ;
                    a[k][j]  = temp;
                }
            }
        }
    }
}

int main() {
    int a[MAX][MAX];
    int n;
    do{
        printf("\nNhap so phan tu cua 2 mang  : ");
        scanf("%d", &n);
        if(n< 1 || n> MAX){
            printf("\nmoi ban nhap lai ");
        }
    }while(n< 1 || n> MAX);
    
    nhap(a,n);
    printf("cac phan tu cua mang la : \n");
    xuat(a,n);
    
    sapXep(a,n);
    printf("cac phan tu cau sau khi sap xep la : \n");
    xuat(a,n);
    
    printf("\n=======================end================\n");

}