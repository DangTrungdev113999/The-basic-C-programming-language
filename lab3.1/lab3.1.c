
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao n : ");
    scanf("%d", &n);
    printf("\n========= 1 ========\n");
    int i;
    for (i = 100; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n======== 2 =========\n");

    int s;
    for (i = 0; i <= n; i++) {
        s += i;
    }
    printf("s= %d", s);

    printf("\n========= 3 ======== \n");

    printf(" uoc cua n la:  ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%5d", i);
    }

    printf("\n ========= 4 ========\n");

    printf("uoc so chan cua n la : ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0)
            printf("%5d", i);
    }
    printf("\n========= 5 ========\n");

    printf("tong uoc so le cua n la : ");
    int s1;
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0)
            s1 += i;
    }
    printf("%d", s1);

    printf("\n======== 6 =========\n");

    int s2 = 0;
    printf("tinh tong cac uoc so nho hon n la ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            s2 += i;
    }
    printf("s2 = %d", s2);

    printf("\n======== 7 =========\n");

    printf("uoc so le lon nhat cua so nguyen duong %d la : ", n);
    
    int max;
    for (i = n; i >= 1; i-- ) {   // kiem tra theo chieu giam dan
        if (n % i == 0 && i % 2 != 0) {
            max = i;
                printf("%d", max);
            }
        if(max == i)      // neu dung voi i dau tien thii thoat
        break;
    }
    printf("\n======== 8 =========\n");
    int k ;
    for(i = 2; i < n; i++){
        if( n%2 == 0) k=1;
        else              k =0;
    } 
    if(k == 0) printf(" %d la so nguyen to", n);
    else        printf("%d khong la so nguyen to",n);

    printf("\n======== end =========\n");
}