
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   int i,a,s=0;
    printf("nhap a :");
    scanf("%d",&a);
    for (i=1;i<a;i++){
        if (a%i==0&&i%2!=0){
            s=s+i;
            printf("%d\n",i);     
        }
    }
    
    printf("tong cac uoc le : %d",s);

}
