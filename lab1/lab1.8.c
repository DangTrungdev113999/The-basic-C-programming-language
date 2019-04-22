
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a;
    int unit, dozen, hundred;
    
    printf("nhap vao so co 3 chu so : ");
    scanf("%d", &a);
    
    printf("******************************\n");
    printf("- chu so hang tram la : %d \n", hundred = (a - (a%100)) /100  );
    printf("- chu so hang chuc la : %d \n", dozen = ( (a%100) - (a%10))/10 );
    printf("- chu so hang don vi la : %d \n", unit  = a%10 );
    
}

