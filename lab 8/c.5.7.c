
#include <stdio.h>
#include <stdlib.h>
#define MAX 100


typedef struct { // dinh nghia
    char *firstName;
    char *lastName;
    int age;
} Person;

void pointerOfPrimtiveType(){
    char *name;
    int *ptr, value = 100, arr[100];
    //maloc
    // su dung ten nhu bien binh thuong
    ptr = malloc(1*sizeof(int));
    *ptr = 100;
    printf("%d", *ptr);
    free(ptr);
    // su dung nhu bien binh thuong
//    ptr = arr;
    ptr = malloc(100*sizeof(int)); // cap phat mang int gom 100 phan tu ptr[100];
    ptr[0] = 2; ptr[2] = 3;
    printf("\nptr[0] =  %d, ptr[2] = %d", ptr[0], ptr[2]);
    free(ptr);
}

void structureMenbersIsPointer(){
    Person p;
    p.firstName = malloc(100*sizeof(Person));
    scanf("%s", p.firstName);
    puts(p.firstName);
    free(p.firstName);
}

void strcturePointerPoinToStructutPointerMember(){
    Person *p;
    p = calloc(1,sizeof(Person));
    p->firstName = calloc(100, sizeof(char));
    p->lastName = calloc(100, sizeof(char));
    
    puts("enter your first name: ");
    gets(p->firstName);
    puts("enter your last name :");
    gets(p ->lastName);
    puts("enter your age : ");
    scanf("%d", &p->age);
    
    printf("\nPerson info: \nFirst Name: %s\n Last Name: %s\nAge: %d", p->firstName, p->lastName, p->age);
    free(p->firstName);
    free(p->lastName);
    free(p->age);
    
}

int main() {
//    pointerOfPrimtiveType();
//    structureMenbersIsPointer();
    strcturePointerPoinToStructutPointerMember();



    printf("\n=================end===================\n");
}

