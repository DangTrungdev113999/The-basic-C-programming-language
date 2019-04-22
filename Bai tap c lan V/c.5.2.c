#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    printf("nhap chuoi : ");
    gets(str);

    int i;
    int count;
          if( str[0] !=0 ){
            count++;
        }

    for (i = 0; i < strlen(str); i++) {

        if(str[i] == ' ' && str[i+1] != ' ' &&  str[i+1] != '\0')
        count++;
    }
    printf("%d", count);
    printf("\n======================end==========================\n");
}
