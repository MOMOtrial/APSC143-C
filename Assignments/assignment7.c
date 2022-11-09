#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    FILE *fp = NULL;
    int rows = 0;
    int array[100][100];

    fp = fopen("payloads.txt", "r");
    if (fp == NULL) {
        printf("File not found.");
        exit(0);
    }

    // Get number of rows
    rows = fscanf(fp, "%d\n", &rows);

    // Allocate memory using malloc()
    int* pointer = malloc(rows*sizeof(int));

    // Check if memory allocation was successful
    if (pointer == NULL) {
        printf("No payloads in file.");
        exit(0);
    }else {
        for (int i = 0; i < rows; i += 1) {
            pointer[i] = fscanf(fp, "%d %d\n", &array[i][0], &array[i][1]);
        }
        for (int i= 0; i < rows; i += 1) {
            printf("%d ", pointer[i]);
        }
    }
    return 0;
    
    
}https://linuxhint.com/two-dimensional-array-malloc-c-programming/
