#include <stdio.h>
#include <stdlib.h>

#define ORE_PRICE 8500


int main() {
    FILE *fp = NULL;
    int rows = 0;
    int columns = 2;
    double array[100][100];

    fp = fopen("payloads.txt", "r");
    if (fp == NULL) {
        printf("File not found.");
        exit(0);
    }

    // Get number of rows
    fscanf(fp, "%d\n", &rows);

    // Allocate memory using malloc()
    int *pointer = (int *)malloc(rows * columns * sizeof(int));

    // Check if memory allocation was successful
    if (pointer == NULL) {
        printf("No payloads in file.");
        exit(0);
    }else {
        int i = 0;
        while (fscanf(fp, "%lf %lf\n", &array[i][0], &array[i][1]) == 2) {
            i++;
        }

        // Calculate mass of ore
        for(int a = 0; a < rows; a += 1) {
            for (int j = 0; j < 1; j += 1) {
                array[a][3] = array[a][0] * array[a][1];
            }
        }

        for(int a = 0; a < rows; a += 1) {
            for (int j = 0; j < 1; j += 1) {
                array[a][2] = array[a][3] * ORE_PRICE;
            }
        }

        printf("Payload Data:");
        printf("Total Mass / Grade / Ore Value\n");

        for(int a = 0; a < rows; a += 1) {
            for (int j = 0; j < 1; j += 1) {
                printf("%0.0lf %0.2lf $%0.0lf\n", array[a][0], array[a][1], array[a][2]);
           }
        }

        for(int i = 0; i < rows; i += 1) {
            for (int j = i + 1; j < rows; j += 1) {
                if (array[i][2] < array[j][2]) {
                    int index = array[i][2];
                    array[i][2] = array[j][2];
                    array[j][2] = index;
                }
            }
        }
        
        free(pointer);
        fclose(fp);

        FILE * ofp;
        ofp = fopen("ores.txt", "w");

        if (ofp == NULL) {
            printf("File not found\n");
        }else{
            fprintf(fp, "Sorted Payload Data:\n");
            fprintf(fp, "Total Mass / Grade / Ore Value\n");

            for(int i = 0; i < rows; i += 1) {
                fprintf(fp, "%0.0lf %0.2lf %0.0lf\n", array[i][0], array[i][1], array[i][2]);
            }
        }
    }
}
