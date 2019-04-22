
#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    printf("nhap vao canh a : "); 
    scanf("%f", &a);
    printf("nhap vao canh b : ");
    scanf("%f", &b);
    printf("nhap vao canh c : ");
    scanf("%f", &c);
    
    if( a == b && a == c && b == c) 
        printf("tam giac deu\n");
    else if ( a == b || a == c || b == c ) 
        printf("tam giac can\n");
    else if ( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b )
        printf("tam giac vuong\n");
    else
        printf("tam gia thuong \n");
    
    

}

