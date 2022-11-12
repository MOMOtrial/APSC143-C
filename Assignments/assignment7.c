#include <stdio.h>
#include <stdlib.h>

#define ORE_PRICE 8500


int main() {
    FILE *fp = NULL;
    int rows = 0;
    int columns = 2;
    double array[100][100];

    // Open payloads.txt file
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

        // Calculate Ore price
        for(int a = 0; a < rows; a += 1) {
            for (int j = 0; j < 1; j += 1) {
                array[a][2] = array[a][3] * ORE_PRICE;
            }
        }

        // Print to the console
        printf("Payload Data:\n");
        printf("Total Mass / Grade / Ore Value\n");
        for(int a = 0; a < rows; a += 1) {
            for (int j = 0; j < 1; j += 1) {
                printf("   %0.0lf      %0.2lf    $%0.0lf\n", array[a][0], array[a][1], array[a][2]);
            }
        }

        // Sort the data
        for(int i = 0; i < rows; i += 1) {
            for (int j = i + 1; j < rows; j += 1) {
                if (array[i][2] < array[j][2]) {
                    for (int x = 0; x < 3; x += 1) {
                        float temp = array[i][x];
                        array[i][x] = array[j][x];
                        array[j][x] = temp;
                    }
                }
            }
        }

        free(pointer);
        fclose(fp);

        // Open ores.txt file
        FILE * ofp;
        ofp = fopen("ores.txt", "w");

        // Print sorted data to ores.txt
        if (ofp == NULL) {
            printf("File not found\n");
        }else{
            fprintf(fp, "Sorted Payload Data:\n");
            fprintf(fp, "Total Mass / Grade / Ore Value\n");

            for(int i = 0; i < rows; i += 1) {
                fprintf(fp, "   %0.0lf      %0.2lf    $%0.0lf\n", array[i][0], array[i][1], array[i][2]);
            }
        }
    }
}
