//create an array of multiplicationtable of 7 upto 10(7*10 = 70).use realloc to make it store 15 numbers(from 7*1 to 7*15)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *table;
    int i;

    
    table = (int *) malloc(10 * sizeof(int));

    
    if (table == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  
    }

    
    for (i = 0; i < 10; i++) {
        table[i] = 7 * (i + 1);
    }

    
    printf("Multiplication table of 7 (up to 10):\n");
    for (i = 0; i < 10; i++) {
        printf("7 * %d = %d\n", i + 1, table[i]);
    }

    
    table = (int *) realloc(table, 15 * sizeof(int));

    
    if (table == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;  
    }

    
    for (i = 10; i < 15; i++) {
        table[i] = 7 * (i + 1);
    }

    
    printf("\nMultiplication table of 7 (up to 15):\n");
    for (i = 0; i < 15; i++) {
        printf("7 * %d = %d\n", i + 1, table[i]);
    }

    
    free(table);

    return 0;
}
