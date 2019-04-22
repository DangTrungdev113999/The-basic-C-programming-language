
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b;
    printf("nhap vao so co 4 chu so: ");
    scanf("%d", &a);
    int sum=0;
  
    while(a){
        sum+=a%10;
        a/=10;
    }
    
    printf("sum = %d \n", sum);
    printf("%d",b/10);
   }


