
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv){
    int i,t=0,a;
    printf("nhap a :");
    scanf("%d",&a);
    for (i=0;i<a;i++){
        t=t+i;
    }
    printf("tong cac so nho hon %d la : %d\n",a,t);
    return (EXIT_SUCCESS);
}

