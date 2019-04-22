#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int math, physical, chermistry;
    int sum, average;
    
    printf("nhap vao diem math of you : ");
    scanf("%d", &math);
    
    printf("nhap vao diem physical of you");
    scanf("%d", &physical);
    
    printf("nhap vao diem chermistry");
    scanf("%d", &chermistry);
   
    sum = math + physical + chermistry;
    average = (math + physical + chermistry)/3;
    printf("sum = %d , average = %d\n", sum, average);
    
    return (EXIT_SUCCESS);
}
