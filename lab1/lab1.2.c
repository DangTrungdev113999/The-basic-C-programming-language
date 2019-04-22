#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    printf("CHUONG TRINH TINH CHU VI DIEN TICH CUA HINH CHU NHAT\n");
    printf("**********************************************************************************************\n");
    
    long long a, b, S, P;
    printf("moi ban nhap can A : ");
    scanf("%lld", &a);
    
    printf("moi ban nhap can B : ");
    scanf("%lld", &b);
    
    printf("chu vi hinh chu nhat la : %lld \n", P=(a+b)*2 );
    printf("dien tich hinh chu nhat la : %lld \n", S=a*b);
    
}

