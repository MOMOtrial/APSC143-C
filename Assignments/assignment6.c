#include <stdio.h>
#include <string.h>

// Define max char to convert to acronym
#define MAX_CHAR 51


int main() {
    // Define variables
    int numAcronyms;

    // Determine number of acronyms
    printf("Enter number of acronyms to add to the database: \n");
    scanf("%d", &numAcronyms);
    getchar();

    // Define arrays and characters
    char database[numAcronyms][MAX_CHAR];
    char acronyms[numAcronyms][20];
    char searchInput[20];

    // Add acronyms to database
    for (int i = 0; i < numAcronyms; i += 1) {
        // Break out of the loop when all acronyms are added to database
        if (numAcronyms < 1) {
            break;
        }

        // Collect string and store it in respected database row
        printf("Enter the string to convert into an acronym: \n");
        fgets(database[i], 51, stdin);

        memcpy(database[i] + strlen(database[i] + 1), "\0", 1);

        int a = 0;
        int b = 0;

        // Determine acronym
        while (a < strlen(database[i])) {
            if (database[i][a] >= 'A' && database[i][a] <= 'Z') {
                // Store acronym in database
                memcpy(acronyms[i] + b, database[i] + a, 1);
                b += 1;
            }
            a += 1;
        }
        memcpy(acronyms[i] + b, "\0", 1);

        // Print out acronym
        printf("Acronym of \"%s\" is \"%s\".\n", database[i], acronyms[i]);

    }

    // Search for string of the entered acronym
    do {
        printf("Enter the acronym of the string you would like to see, or enter 0 to exit: \n");
        scanf("%s", searchInput);

        // Determine if acronym is in database
        for (int i = 0; i < numAcronyms; i += 1) {
            int index;

            // If acronym is in database output will == 0
            index = strcmp(acronyms[i], searchInput);

            // Acronym is in database
            if (index == 0) {
                printf("The corresponding string to \"%s\" is \"%s\".\n", searchInput, database[i]);
                i = numAcronyms;
            }

            // Acronym not in database
            if (i == numAcronyms - 1 && 48 != searchInput[0]) {
                printf("No matches found.\n");
                i = numAcronyms;
            }
        }
    } while (48 != searchInput[0]);
}

