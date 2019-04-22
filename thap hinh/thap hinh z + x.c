#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    int a,b;
    printf("moi ban nhap vao do cao : ");
    scanf("%d", &a);
    printf("moi ban nhap vao do dai : ");
    scanf("%d", &b);
    
    for(i = 1; i<= a; i++){
        printf("\n \n");
        for(j = 1;j<= b; j++){
            if(i == 1 || i == a)
                printf("*   ");
            if(i != 1 && i != a){
               if(j + i == a +1  || i+ j == b + 1 || i == j)
                   printf("*   ");
               else
                   printf("    ");
            }
            
            
            
        }
            
    }
    
    
    
    printf("\n=================end====================\n");
}

