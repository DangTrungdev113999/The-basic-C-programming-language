

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int i,t=0,a;
    printf("nhap a :");
    scanf("%d",&a);
    for (i=1;i<a;i++){
        if (a%i==0)
            printf("%d\n",i);
        
    }

    return (EXIT_SUCCESS);
}

