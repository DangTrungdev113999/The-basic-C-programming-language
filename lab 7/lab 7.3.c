#include <stdio.h>
#include <stdlib.h>
#define    MAX 100

void tim_kiem(char a[]) {
    printf("nhap vao ki tu can tim: ");
    char x = getchar();
    int i,k = 0;
    printf("ki tu ton tai o vi tri : ");
    for (i = 0; i < strlen(a); i++) {
        if (a[i] == x){
            k = 1;
            printf("%3d", i);
        }else k = 0;
        
    }
    if(k == 0 ) printf("\nkhong co ki tu can tim trong chuoi\n");

}

int main() {
    char a[MAX];
    printf("nhap vao chuoi : ");
    gets(a);
    tim_kiem(a);


    printf("\n==========end===============\n");
}