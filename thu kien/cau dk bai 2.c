

#include <stdio.h>
#include <stdlib.h>


int main() {
    int toan,ly,hoa,a;
    printf(" nhap diem toan ly hoa :");
    scanf(" %d %d %d",&toan,&ly,&hoa);
    printf(" trung binh cong  la : %d\n",(toan+ly+hoa)/3);
    a=(toan+ly+hoa)/3;
    if (a<=5){
        printf("  co gang\n");
    }else if (a>5 && a<6){
        printf(" trung binh\n");
    } else if (a>=6 && a<7){
            printf("kha\n");
    }else if (a>=7 && a<8 ){
        printf(" gioi\n");
    }else if (a>=8) {
        printf("xuat sac\n");
    } else {
    }
    }


