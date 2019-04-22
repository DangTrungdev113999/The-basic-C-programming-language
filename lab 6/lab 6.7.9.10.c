#include <stdio.h>
#include <stdlib.h>


void xuatArray(int d) {

    int array[d];
    int i;
    for (i = 0; i < d; i++) {
        printf("nhap vao phan tu array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    printf("cac phan tu cua mang la : ");
    for (i = 0; i < d; i++) {
        printf("%5d", array[i]);
    }

}

int maxOfArray(int b) {
    xuatArray(b);
    int i;
    int array[b];
    int max = array[0];
    for (i = 0; i < b; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int averageOfArray(int a) {
    xuatArray(a);
    int i, sum = 0;
    int array[a];
    for (i = 0; i < a; i++) {
        sum += array[i];
    }
    return sum / a;
}

int tongChan(int a){
    xuatArray(a);
    int i;
    int array[a], sumOdd = 0;
    for(i = 0; i< a; i++){
        if(array[i] % 2 == 0)
            sumOdd += array[i] ;
    }
    return sumOdd;
}

int main() {
    int n;
    printf("nhap vao so phan tu cua mang : ");
    scanf("%d", &n);

    printf("\ngia tri lon nhat trong mang la : %d \n", maxOfArray(n));
    printf("\nAverage = %d", averageOfArray(n));
    printf("\n Tong cac phan tu chan = %d", tongChan(n));

    printf("\n==================end==================\n");
}


