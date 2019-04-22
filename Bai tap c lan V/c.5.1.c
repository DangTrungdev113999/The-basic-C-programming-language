#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char x[] = { // mang doi chieu
    '0','1','2','3','4','5','5','6','7','8','9','A','B','C','D','E','F','G','H',
    'I','J','K','L','J','M','N','O','P','Q','R','S','T','U','V','X','Y', 'Z','Y'
};

int main() {
    int n,k,b;
    char s[100]; // mang ket quan chia du
    scanf("%d%d", &k, &b); // nhap gia tri he 10, co so b
    if(k == 0){
        printf("0\n");
    }else{
        int i = 0;
        while(k){ //chia toi khi phan nguyen cua phep chia == 0 thi dung lai
            int temp = k%b; // lay du
            k/=b; // chia lay nguyen
            s[i++] = x[temp]; // gan gia tri dai dien tuong ung phan du sau moi lan chia
        }
        s[i] = '\0'; // cat duoi
       strrev(s); // dao nguoc ket qua = ket qua chinh thuc
        puts(s);  // hien thi ra man hinh

    }
    
    
    printf("\n======================end==========================\n");
}
