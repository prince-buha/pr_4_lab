#include <stdio.h>

int main() {
    
 int i, j, s;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 * 2 - 1; j++) {
            if (j >= 5 - i + 1 && j <= 5 + i - 1) {
                if (j == 5 - i + 1 || j == 5 + i - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    
}
