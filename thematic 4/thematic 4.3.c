#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {3,4,6,7,9 };
    int i,k=0;
    
    for (i = 0; i < 5; i++) {
        if(array[i] % 2 == 0) {
            printf("%d\n", array[i]);
            k =  0;
            break;
        }else k = 1;
    }
    if(k == 1) printf("khong ton tai gia tri chan trong ham \n \n");
}

