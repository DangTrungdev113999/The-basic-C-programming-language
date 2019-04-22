#include <stdio.h>
#include <stdlib.h>


int main() {
    float math, physical, chemistry, sum;
    printf("Enter the math, physical, chemistry : ");
    scanf("%f%f%f", &math, &physical, &chemistry);
    sum = (math*3 + physical*2 + chemistry)/6;
    
    if(math >= 0 && math <= 10 && physical >= 0 && chemistry <= 10 && chemistry >= 0 && chemistry <= 10)
        printf("average = %f \n",sum );
    else
        printf("ban la thien tai hehe");
    
    if(sum >= 5 && sum <6.5) printf("the average student \n");
    else if (sum >= 6.5 && sum < 8) printf("the good student \n");
    else if (sum >=8 ) printf("the very good student \n");
    else                       printf("the below average student \n ");
    printf("\n============end=============\n");
}

