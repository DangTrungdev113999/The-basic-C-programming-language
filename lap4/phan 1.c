#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, s = 0, max, average, s1=0, number;
    int a[n];

    printf("nhap vao so phan tu cua mang : ");
    scanf("%d", &n);
    printf("=======================\n");
    do {
        printf("\n");
        for (i = 0; i < n; i++) {
            printf("nhap vao phan tu mang thu %d : ", i);
            scanf("%d", &a[i]);
        }
        printf("cac phan tu cua mang la : ");

        for (i = 0; i < n; i++) {
            printf("%4d", a[i]);
        }

        printf("\n--------------------------------------------\n");
        for (i = 0; i < n; i++) {
            if (a[i] % 2 == 0)
                s += a[i];
        }
        printf("s = %d", s);

        printf("\n--------------------------------------------\n");
        printf("cac phan tu so le la : ");
        for (i = 0; i < n; i++) {
            if (a[i] % 2 != 0)
                printf("%4d", a[i]);
        }

        printf("\n--------------------------------------------\n");
        printf("cac phan tu co chi so (key) le : ");
        for (i = 0; i < n; i++) {
            if (i % 2 != 0)
                printf("%4d", a[i]);
        }
        
        printf("\n--------------------------------------------\n");
        max = a[0];
        for(i = 0 ; i<n; i++){
            if(a[i] > max ) max = a[i];
        }
        printf("max = %d", max );
        
       printf("\n--------------------------------------------\n");
       printf("average = %d", s/n);
       
       printf("\n--------------------------------------------\n");
       for( i = 0; i < n; i++ ){
           s1 += a[i]*a[i];
       }
       printf("tong binh phuong cac phan tu la s = %d", s1);
       
       printf("\n--------------------------------------------\n");
       printf("nhap gia tri tu ban phim : ");
       scanf("%d", &number);
       for(i = 0; i< n; i++){
           if (number == a[i]) {
               printf("ton tai %d trong mang", a[i]);
               break;
           }
           
       }
       
    printf("\n--------------------------------------------\n");   
    printf("cac phan tu chia het cho 3 la :");
    for(i = 0; i<n; i++){
        if(a[i] % 3 == 0 ) printf("%4d ", a[i] );
    }
    printf("\n cac phan tu chia het cho 3 la :");
    for(i = 0; i<n; i++){
        if(a[i] % 5 == 0 ) printf("%4d", a[i] );
    }
       
    } while (a[i] != 0);
    printf("\n=====================end============================\n");
}

