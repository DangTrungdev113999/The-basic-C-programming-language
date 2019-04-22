
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a[5] = {1,2,999,4,5};
    int *pa;
    pa = a;
    int i, max;
    max = *(pa + 0);
    for(i = 0; i< 5; i++){
        if(*(pa + i) > max) 
            max = *(pa + i);
    }
    printf("max = %d", max );
    
    
    
    
    
    printf("\n\n=============end===================\n");
}

