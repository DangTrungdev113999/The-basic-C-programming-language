#include <stdio.h>
#include <stdlib.h>

int kiemTra(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 2;
}

int hienThi(int n) {
    if (kiemTra(n) == 1)
//        return
            printf("%d la so chan \n", n);
    else
//        return 
            printf("%d la so le \n", n);

}

int main() {
    int n;
    printf("nhap vao n :");
    scanf("%d", &n);

//    printf("%d", hienThi(n));
    hienThi(n);


    printf("\n==================end==================\n");
}

