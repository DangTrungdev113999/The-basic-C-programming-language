


#include <stdio.h>
#include <stdlib.h>

int main() {
    int trauDung, trauNam, trauGia;

    for (trauDung = 1; trauDung < 100; trauDung++)

        for (trauNam = 1; trauNam < 100; trauNam++)

            for (trauGia = 1; trauGia < 100; trauGia++)

                if ((5 * trauDung + 3 * trauNam + trauGia / 3 == 100) && (trauGia % 3 == 0) && (trauDung + trauNam + trauGia == 100))

                    printf("trau dung = %d  trau nam = %d   trau gia = %d \n", trauDung, trauNam, trauGia);

}
