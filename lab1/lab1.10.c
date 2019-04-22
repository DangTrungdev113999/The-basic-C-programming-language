#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int a, b;
    printf("nhap vao so co 2 chu so");
    scanf("%d", &a);
    
    b = (a%10)*10 + (a-a%10)/10;
    printf("so dao nguoc cua so ban dau la: %d \n", b );
    printf("*********************************************");
    
}
