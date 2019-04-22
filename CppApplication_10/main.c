
#include <stdio.h>
#include <stdlib.h>
typedef struct{

    int id;
    char *firstName;
    char *lastNane;
    int age;
    
}person;

static int id = 100;
void  getUserInput(FILE *fout){ // thao tac ghi thong tin ra file
    person p;
 
    p.firstName = malloc(sizeof(char)*50);
    p.lastNane = malloc(sizeof(char)*50);
          int choice;
  while( 1 ){ // lap vo han
      p.id = ++id;
      puts("Enter your First name, Last name, age: ");
      scanf("%s%s%d", p.firstName, p.lastNane, &p.age);
      fprintf(fout, "%5d%10s%10s%5d\n", p.id, p.firstName, p.lastNane, p.age); // ghi ra file

      puts("continue? press 1; Exit ? press 0 : ???");
      scanf("%d", &choice);

      if(choice == 0){ // thoat vong lap
          break;
      }
  }  
}

void readFile(FILE *fin){
    person p;
    p.firstName = malloc(50*sizeof(char));
    p.lastNane = malloc(50*sizeof(char));
     
    while(!feof(fin)){
        fscanf(fin,"%5d%10s%10s%5d", &p.id, p.firstName, p.lastNane, &p.age); // doc du lieu
        printf("%5d%10s%10s%5d\n", p.id, p.firstName, p.lastNane, p.age);
    }
}
    
int main() {
    FILE *fin; // doc du litu tu file
    FILE *fout; // ghi du lieu tu file

//    fout = fopen("C:/Users/Admin/Desktop/KQ.XYZ", "a+");
//    if( fout != NULL){
//        getUserInput(fout); // thao tac ghi file
//        fclose(fout); // dong file lai
//    }
        
    fin = fopen("C:/Users/Admin/Desktop/KQ.XYZ", "r");
    if(fin != NULL){
        readFile(fin);
        fclose(fin);
    }
        
}

