#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// type *pointerName;

int *arrayOfPointer[5];
// Defines an array of 5 pointers to int values


// malloc(size)

// free(pointerToMemory)

// realloc(pointerToMemory, newSize)

// calloc(numberOfThings, sizeOfThing)


// FILE *fp;

// fopen(fileName, mode);

// r --> Reading mode(an get data, but cant add or change)
// w --> Writing mode (creates an empty file for adding data to)
// a --> Append mode (does not empty the file, allows for new data to be added)
// r+ --> Both reading and writing mode
// w+ --> Both reading and writing mode
// a+ --> Both reading and appending mode

//     FILE *fp;
//    fp = fopen("exampleFile.txt", "r");
//    fscanf(file, formatSpecifiers, adresses);
//    fgets(string, numberOfCharacters, stream)

// getc(file)

// putc(character, file)

// fclose(file);

int main() {
    int value = 100;
    int *valuePointer = &value;
    printf("%d", valuePointer); // prints out the memory adress --> 6422296

    int value = 100;
    int *valuePointer = &value;
    printf("%d", *valuePointer); // prints out the value at the memory adress --> 100

    int value = 100;
    int *valuePointer = &value;
    *valuePointer = 0;
    printf("%d", value);    // 0

    int value = 100;
    int otherValue = value;
    otherValue = 50;
    printf("%d", value);    // 100

    int* pInteger;
    int integer = 5;
    int* pInteger2;  // If set = to NULL would print nothing

    pInteger = &integer;
    printf("%d\n", pInteger); // prints memory space 6422296
    printf("%d\n", *pInteger); // prints memory space value 5

    integer = 10;
    printf("%d\n", *pInteger); // prints memory space value 10

    pInteger2 = pInteger;
    integer = 15;

    printf("%d\n", *pInteger2); // prints 0


    int* arrayOfPointers[5] = { NULL, NULL,NULL,NULL,NULL};
    int arrayOfInteger[5] = {1,2,3,4,5};
    int integer1 = 1, integer2 = 2, integer3 = 3, integer4 = 4, integer5 = 5;

    for(int i = 0; i < 5; i += 1) {
        arrayOfPointers[i] = &arrayOfInteger[i];

    }

    for(int i = 0; i < 5; i += 1) {
        printf("%d\n", *arrayOfPointers[i]);
    }

    for(int i = 0; i < 5; i += 1) {
        arrayOfInteger[i] *= 2*;
    }

    char* myStringPointers[] = {"Hello", "World"};

    printf("%s\n", myStringPointers[0]); // Hello

    myStringPointers[0] = "World";

    printf("%s\n", myStringPointers[0]); // World


    int *intArrayPointer = (int*)malloc(10*sizeof(int));
    intArrayPointer[0] = 1;
    printf("%d", intArrayPointer[0]);

    int size = 10;
    int *intArrayPointer = malloc(size*sizeof(int));

    int** intPointerArrayPointer = malloc(size*sizeof(int*));

    int arrayOfInts[4] = {1,2,3,4};
    int* pointerToInts = malloc(4*sizeof(int));
    int* pointerToInts = calloc(4, sizeof(int));   // set to 0

    pointerToInts = realloc(pointerToInts, 5*sizeof(int));

    if(pointerToInts == NULL) {
        printf("Memory could not be allocated");
    }else{
        for (int i = 0; i < 4; i += 1) {
            pointerToInts[i] = i +1;
            pointerToInts[4] = 5;
            printf("%d\n", pointerToInts[i]);
        }
    }

//    pointerToInts = realloc(pointerToInts, 5*sizeof(int));
//
//    if(pointerToInts == NULL) {
//        printf("Memory could not be allocated");
//    }else{
//        for (int i = 0; i < 4; i += 1) {
//            pointerToInts[i] = i +1;
//            pointerToInts[4] = 5;
//            printf("%d\n", pointerToInts[i]);
//        }
//    }
//
    free(pointerToInts);

// ------------
    FILE *fp;
    fp = fopen("exampleFile.txt", "r");
    int myInt;
    char myChar;
    fscanf(fp, "%d %c", &myInt, &myChar);


    // -------
    FILE* fp;
    int myInt;
    char myChar;
    char myString[13];
    fp = fopen("exampleInput.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
    }else{
        //fscanf(fp, "%d %c", &myInt, &myChar );
        myInt = getc(fp);
        getc(fp);
        myChar = getc(fp);
        printf("%d and %c\n", myInt, myChar);

        fgets(myString, 13, fp);
        printf("%s\n", myString);
    }
    fclose(fp);

    FILE *fp;
    char exclamation = '!';
    fp = fopen("example.txt", 'w');
    fprintf(fp, "Hello world%c", exclamation);

    // -------
    FILE* fp;
    char myInt = '7';
    char myChar = 'k';
    char myString[13] = {"Hello world!"};
    fp = fopen("exampleInput.txt", "w");

    if (fp == NULL) {
        printf("File not found\n");
    }else {
        fprintf(fp, "\n%d and %c", myInt, myChar);  // in txt file
        putc('\n', fp);  // in txt file
        putc(myInt+'0', fp);
        putc(' ', fp);
        putc(myChar, fp);

    }
}
