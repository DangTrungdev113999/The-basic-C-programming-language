
#include <stdio.h>
#include <stdlib.h>

int main() {
    float arr[2][2] ={1,2,3,4};
    float *pa;
    pa = arr;

    int i,j;
    for (i = 0; i < 2; i++ ){
        printf("\n \n");
        for(j = 0; j < 2; j++){
            printf("phan tu mang thu a[%d][%d] la %f \n", i,j, *(pa +2* i +j ));
        }
    }
}

