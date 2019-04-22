#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, month, year;
    int befor, after;
    printf("Enter the day : ");
    scanf("%d", &day);
    printf("Enter the month :");
    scanf("%d", &month);
    printf("Enter the year : ");
    scanf("%d", &year);
    befor = day - 1;
    after = day + 1;

    printf("\n====================\n");
    //kieåm tra ñieàu kieän cuûa ngaøy thaùng naêm
    if (day > 0 && day <= 31 && month > 0 && month <= 12 && year > 0) {
        // kieåm tra ñieàu kieän caùc thaùng coù 31 ngaøy
        if ( day <= 31 &&month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) {
            printf("ngay %d thang %d nam %d \n", day, month, year);
            if (after == 31)
                printf("ngay ke tiep truoc la %d, ngay sau la 1", befor);
            else
                printf("ngay ke tiep truoc la %d, ngay sau la %d", day - 1, day + 1);
            // kieåm tra ñieàu kieän caùc thaùng coù 30 ngaøy
        } else if (day <= 30 && month == 4 || month == 6 || month == 9 || month == 11 ) {
            printf("ngay %d thang %d nam %d \n", day, month, year);
            if (after == 30)
                printf("ngay ke tiep truoc la %d, ngay sau la 1", befor);
            else
                printf("ngay ke tiep truoc la %d, ngay sau la %d", day - 1, day + 1);
            // kieåm tra ñieàu kieän thaùng 2
        } else if ( day <= 29 && month == 2 ) {
            if ( day <= 28 && year % 4 == 0 ) {
                printf("thang 2 nam %d \n", year);


                if (after == 28)
                    printf("ngay ke tiep truoc la %d, ngay sau la 1", befor);
                else
                    printf("ngay ke tiep truoc la %d, ngay sau la %d", day - 1, day + 1);

            } else {
                printf("thang 2 nam %d \n", year);
                if (after == 29)
                    printf("ngay ke tiep truoc la %d, ngay sau la 1", befor);
                else
                    printf("ngay ke tiep truoc la %d, ngay sau la %d", day - 1, day + 1);
            }
        } else {
            printf("cac thang 4,6, 9, 11 chi co 30 ngay \n");
        }
    } else {
        printf("you are the enter false : \n");
    }
    printf("\n=========end========\n");
}

