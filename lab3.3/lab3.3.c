

#include <stdio.h>
#include <stdlib.h>

int main() {
    int chicken, dog;

    for (chicken = 1; chicken < 32; chicken++)
        for (dog = 1; dog < 32; dog++)
            if ((chicken * 2 + dog * 4 == 100) && (chicken + dog == 32))
                printf("chicken : %d,  dog : %d", chicken, dog);
            }

