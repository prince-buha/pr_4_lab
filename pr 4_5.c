#include <stdio.h>

 main() {

    int i,j,s;

  
    for ( i = 1; i <= 5; i++) {
       
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

       
        for ( s = 1; s <= 2 * (5 - i); s++) {
            printf("  "); 
        }
  
        for ( j = i; j >= 1; j--) {
            if (j != 5)
                printf("%d ", j);
        }

        printf("\n");
    }

  
}