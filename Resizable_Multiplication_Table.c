#include <stdio.h>

/* DellPogie Resizable Multiplication Table */

void drawMultiplicationTable(int x, int y) {
    
    printf("Multiplication Table (%d x %d):\n\n", x, y);

    printf("   ");
    
    for (int j = 1; j <= y; j++) {
        printf("%4d", j);
    }
    
    printf("\n");

    for (int i = 1; i <= x; i++) {
        printf("%2d ", i);
        
        for (int j = 1; j <= y; j++) {
            printf("%4d", i * j);
        }
        
        printf("\n");
        
    }
}

int main() {
    
    int x, y;

    printf("Input the number of rows: ");
    scanf("%d", &x);

    printf("Input the number of columns: ");
    scanf("%d", &y);

    if (x <= 0 || y <= 0) {
        printf("Please enter positive numbers for rows and columns.\n");
        return 1;
    }

    drawMultiplicationTable(x, y);

    return 0;
    
}
