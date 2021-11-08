#include <stdio.h>

int main() {

    for(int u = 1; u < 10; u++) {
        for(int f = u; f <= 9; f++) {
            printf("%d ", f);
        }
        printf("\n");
    }

    return 0;
}