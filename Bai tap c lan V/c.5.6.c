
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    char s[MAX];
    printf("nhap vao chuoi : ");
    gets(s);
    int i, n = strlen(s);

    if (s[0] != ' ') {
        for (i = 0; i < n; i++) {
            // xoa ky tu trang 
            if (s[i] == ' ' && s[i + 1] == ' ') {
                for (int j = i; j < n; j++) {
                    s[j] = s[j + 1];
                }
            }

            //  ñoåi kyù töï ñaàu tieân cuûa moãi töø thaønh chöõ hoa  
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                s[i + 1] -= 32;
            }
            // ñoåi caùc kyù töï khaùc thaønh chöõ thöôøng    
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ' && s[i + 1] != ' ') {
                s[i] += 32;
            }

            s[0] -= 32; // ñoåi laïi kyù töï ñaøu tieân thaønh chöõ hoa 



            printf("%c", s[i]);
        }

    } else {
        for (i = 0; i < n; i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                s[i + 1] -= 32;
            }
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ' && s[i + 1] != ' ') {
                s[i] += 32;
            }
            printf("%c", s[i]);
        }
    }


    printf("\n=================end===================\n");
}

