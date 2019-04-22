

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int thousand, hundred, dozen, unit;
    printf("nhap vao so co 4 chu so : ");
    scanf("%d", &n);
    
    thousand = (n - (n % 1000)) / 1000;
    hundred = ((n % 1000) - (n % 100)) / 100;
    dozen = ((n % 100) - (n % 10)) / 10;
    unit = n % 10;

    if (thousand == 1) printf("%d doc la :  mot nghin ",n);
    if (hundred == 1) printf("mot tram ");
    if (dozen == 1) printf("muoi ");
    if (unit == 1) printf("mot");
    
    printf("\n======end========\n");
}

