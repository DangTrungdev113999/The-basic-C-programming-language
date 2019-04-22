#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap vao phan tu cua mang : ");
    scanf("%d", &n);

    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("nhap vao phan tu mang thu a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n cac phan tu cua mang la : ");
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }

    int tmg;
    int j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                tmg = a[i];
                a[i] = a[j];
                a[j] = tmg;
            }
        }
    }
    printf("\n ================ \n");
    for (i = 0; i < n; i++){
        printf("%4d", a[i]);
    }
    
    for(i = 0; i < n -1; i++){
     for(j = i+1; j< n ; j++){
         if (a[j] > a[i]){
             tmg = a[i];
             a[i] = a[j];
             a[j] = tmg;
         }
     }   
    }
    printf("\n ================ \n");
    for(i = 0; i< n; i++){
        printf("%4d", a[i]);
    }
        printf("\n ================ \n");
    }

