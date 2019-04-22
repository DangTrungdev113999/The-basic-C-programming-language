#include <stdio.h>
#include <stdlib.h>

int main() {
    char fullName[30];
    float salary;
    int age;
    
    printf("nhap vao ten cua ban :\n");
    scanf("%s", &fullName);
    
    printf("Nhap tien luong cua ban:\n ");
    scanf("%f", &salary);
            
    printf("nhap tuoi cua ban: \n");
    scanf("%d", &age);
    printf("*************************** \n");
    
    printf("chao ban : %s \n", fullName);
    printf("Muc luong cua ban la : %f \n", salary);
    printf("Tuoi cua ban la : %d \n", age);
  
    
    return 0;
}

