#include <stdio.h>

/* DellPogie Resizable Christmas Tree */

void drawGreetings() {
    printf("\n _ \n");
    printf("MERRY CHRISTMAS 2023 from DellPogie, The Programmer !!!!!");
}

void drawLeaves(int h) {
    
    int i, j, k;

    printf("\n_ \n");

    for (i = 1; i <= h; i++) {
    
        for (k = 1; k <= h - i; k++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
        
    }
}

void drawTrunk(int h) {
    
    int i, j;

    for (i = 1; i <= 4; i++) {
        
        for (j = 1; j < (h - 2); j++) {
            printf(" ");
        }
    
        printf("*****\n");
        
    }
    
    for (j = 1; j < (h - 6); j++) {
            printf(" ");
    }
    
    printf("*************\n");
    
}

int main() {
    
    int h;

    printf("Enter the height of the Christmas tree [minimum of 15]: ");
    scanf("%d", &h);

    drawGreetings();
    drawLeaves(h);
    drawTrunk(h);

    return 0;
    
}
