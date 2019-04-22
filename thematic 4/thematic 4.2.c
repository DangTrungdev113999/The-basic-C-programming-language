
#include <stdio.h>
#include <stdlib.h>


int main() {
    int array[5] = {6,4,8,3,4};
    int i,max, min;
    
    for(i=0; i<5; i++){
        printf("nhap nhap tu mang thu %d : ", i);
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];
    for(i=0; i<5; i++){
        if(array[i] > max) max = array[i];
        if(array[i] < min) max = array[i];
    }
    printf("\nmax = %d", max);
    printf("\nmin = %d", min);
}

