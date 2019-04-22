#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char fullName[30];
    int age, year;
    
    printf("Moi ban nhap ten : ");
    scanf("%s", &fullName);
    printf("Moi ban nhap nam sinh : ");
    scanf("%d",  &year);
    
    age = 2018 - year ;
    printf("\n");
    printf("xin chao ban : %s \n", fullName);
    printf("nam nay ban %d \n ", age);
}

