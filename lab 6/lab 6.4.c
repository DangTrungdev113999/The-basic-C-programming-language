#include <stdio.h>
#include <stdlib.h>
int kiemTra( int b ){
    if( b % 3 == 0 && b % 5 == 0 )
        return 1;
    else
        return 0;
    
}

int hienThi(int n ){
    if(kiemTra(n) == 1) 
        printf("%d chia het cho 3 va 5 \n", n);
    else
        printf("%d k chia het cho 3 va 5 \n", n);

}
int main() {
    int a;
    printf("nhap vao n : ");
    scanf("%d", &a);
    hienThi(a);
    printf("\n==================end==================\n");
}

