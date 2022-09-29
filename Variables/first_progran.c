#include <stdio.h>

/* This program asks user
 * for two integers
 * and their sum
 */

int main() {
    // Declare variables for the two integer values
    int value1;
    int value2;

    // Ask the user for two integers and ge the values from them
    printf("Please give two integer values");
    scanf("%d %d", &value1, &value2);


    // Print sum to user
    printf("The sum is %d", value1 + value2);

}
