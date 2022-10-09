#include <stdio.h>
#include <math.h>
#include <string.h>

// One-Dimensional
// type identifier[size]
//float grades[6] = {92.0, 83.0, 88.0, 75.0, 61.0, 86.0};
//float grades[6];
//grades[0] = 92.0;
//float currentGrade;
//currentGrade = grades[0];

// Two-Dimensional   (two rows)
//     0   1   2   3
// 0 | 5   0
// 1 | 2
// 2 |
//int numberss[3][4];
//numberss[0][0] = 5;
//numberss[0][1] = 0;
//numberss[1][0] = 2;


int main() {
    // int myIntArray[4] = {1, 2, 3, 4};
    int myIntArray[4];
    myIntArray[0] = 1;
    myIntArray[1] = 2;
    myIntArray[2] = 3;
    myIntArray[3] = 4;

    //      [rows][elements]
    int numbers[3][4] = {{5,0,6,7},
                         {2,3,1,5},
                         {0,8,4,9}};

    char myCharArray[2][2] = {{'a', 'b'},
                              {'c', 'd'}};

    int intArray[100];

    for(int i = 0; i < 100;  i += 1) {
        intArray[i] =  i + 1;
    }

    int j = 0;
    while(j <= 100) {
        printf("%d\n", intArray[j]);
        j += 1;
    }

    int my2DArray[2][2];
    int elements = 1;
    for(int i=0; i < 2; i += 1) {
        for(int j=0; j<2; j+=1){
            my2DArray[i][j] = elements;
            printf("%d\n", my2DArray[i][j]);
            elements += 1;
        }
    }

    int myArray[6];
    printf("%d\n", sizeof(myArray)/sizeof(myArray[0]));  // prints 6

    // 2D Array
    printf("%d\n", sizeof(myArray[0])/sizeof(myArray[0][0]));  // gives number of elements in each row (columns)


    int my2DArray[6][6];
    int elements = 1;
    for(int i=0; i < sizeof(my2DArray)/sizeof(my2DArray[0]); i += 1) {
        for (int j = 0; j < sizeof(my2DArray[0]) / sizeof(my2DArray[0][0]); j += 1) {
            my2DArray[i][j] = elements;
            printf("%d\n", my2DArray[i][j]);
            elements += 1;
        }
    }


    //memcpy(destination, source, sizeOfSource)
    int myArray[4] = {1,2,3,4};
    int newArray[5];
    memcpy(newArray, myArray, sizeof(myArray));
    newArray[4] = 5;

    for(int i = 0; i < 5; i +=1) {
        printf("%d\n", newArray[i]);
    }
}

