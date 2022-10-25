#include <stdio.h>
#include <string.h>
int main() {
    // Write a program to find the greatest value of an array and print it out
    int array[] = {2,5,8,9,6,-3,11};
    int greatestIndex = 0;
    for(int i=0; i < 7; i += 1) {
        if(array[i] > array[greatestIndex]) {
            greatestIndex = i;
        }
    }
    printf("%d\n", array[greatestIndex]);

    // Write a program to count the number of 0's in the array
    int myArray[] = {1,0,8,0,6,-3,0,0};
    int counter = 0;
    for(int j; j < 8; j += 1) {
        if(myArray[j] == 0) {
            counter += 1;
        }
    }
    printf("%d", counter);

    // creat a 10x10 multiplication table


    //------
    int rows = 2;
    int columns = 5;

    int table[rows][columns];
    int count = 1;
    for(int i = 0; i < rows; i +=1) {
        for(int j =0; j < columns; j += 1) {
            table[i][j] = counter;
            count += 1;
        }
    }

    //change order of rows
    int firstRow [columns];
    memcpy(firstRow, table[0], sizeof(firstRow));  // destination, source, size

    // print 1d array
    for(int i = 0; i < columns; i += 1) {
        printf("%d", firstRow[i]);
    }
    printf("\n");

    // copy content of the second row to the first
    memcpy(table[0], table[1], sizeof(table[0]));

    // copy the content of the first row from the 1d array
    memcpy(table[1], firstRow, sizeof(table[1]));

//    for(int i = 0; i < rows; i += 1) {
//        for(int j = 0; j < columns; j +=1) {
//            printf("%d", table[i][j]);
//        }
//        printf("\n");
//    }

}







