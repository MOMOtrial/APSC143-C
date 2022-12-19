// libraries
#include <stdio.h>
#include <stdlib.h> // pointer
#include <math.h>
//int radius = 4;
//float area = PI * pow(radius, 2);
#include <string.h>
//-----
// && true if both expressions are true, false otherwise
// (weight < 70) && (volume >= 12);

// || true if either expression is true. false otherwise
// weight < 70) || (volume >- 12);

//if (expression)
//  if (expression)
//      words
//  else
//      words
//  else if (expression)

int main() {
    int var1 = 10;
    int var2 = 10;
    int sum = var1 + var2;
    // variable = (logical expression) ? valueIfTrue :
    // valueIfFalse
    //----
    // variable = (logical expression) ? expressionIfTrue :
    // expressionIfFalse
    (sum > 10) ? printf("The sum is greater than 10\n") :
    printf("The sum is not greater than 10\n");
    int newsum = ((var1 + var2) > 0) ? var1 + var2 : 0;
    printf("%d", newsum);
    // switch, put "break" at end of print if wanna break out loop
    int myInt = 3;
    scanf("%d", &myInt);
    if (myInt == 5)
        printf("%d", 4);
    else if (myInt == 4)
        printf("%d", 3);
    else if (myInt == 3)
        printf("%d", 2);
    else if (myInt == 2)
        printf("%d", 1);
    else if (myInt == 1)
        printf("%d", 0);
    else
        printf("The value is not greater "
               "than any int between 0 and 5");

    //--- for, while, do
    //    do {
    //        // code to run, then repeat if expression is true
    //        // semi colon must be placed after while
    //    } while (expression);
    do {
        printf("%d\n", counter);
        counter -= 1;
    } while (counter >= 0);   // stop looping when counter = 0

    for (int i = 10; i >= 0; i -= 1) {
        printf("%d\n", i);
    }

    printf("Enter an integer between 0 and 5\n");
    int myInt;
    scanf("%d", &myInt);

    if (myInt > 0) {
        while (myInt > 0) {
            myInt -= 1;
            printf("%d", myInt);
        }
    }

    do {
        myInt -= 1;
        printf("%d\n", myInt);
    } while (myInt > 0);

    for (int i = myInt - 1; i >= 0; i -= 1) {
        printf("%d\n", i);
    }

    //-- Searching
    // Linear search
    int myArray[5] = {3, 7, 9, 2, 1};
    int desiredELEMENT;
    scanf("%d", &desiredELEMENT);

    int found = 0;
    int foundIndex;

    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i += 1) {
        if (myArray[i] == desiredELEMENT) {
            found = 1;
            foundIndex = i;

        }
    }
    if (!found) {
        printf("The desired element is not in the array\n");
    } else {
        printf("Desired element found at index %d \n", foundIndex);\

    }

    //-- Arrays
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
    int my2DArray[2][2];
    int elements = 1;
    for (int i = 0; i < 2; i += 1) {
        for (int j = 0; j < 2; j += 1) {
            my2DArray[i][j] = elements;
            printf("%d\n", my2DArray[i][j]);
            elements += 1;
        }
    }

    int myArray[6];
    printf("%d\n", sizeof(myArray) / sizeof(myArray[0]));  // prints 6

    // 2D Array
    printf("%d\n", sizeof(myArray[0]) / sizeof(myArray[0][0]));
    // gives number of elements in each row (columns)

    int my2DArray[6][6];
    int elements = 1;
    for (int i = 0; i < sizeof(my2DArray) / sizeof(my2DArray[0]); i += 1) {
        for (int j = 0; j < sizeof(my2DArray[0]) / sizeof(my2DArray[0][0]); j += 1) {
            my2DArray[i][j] = elements;
            printf("%d\n", my2DArray[i][j]);
            elements += 1;
        }
    }
    //memcpy(destination, source, sizeOfSource)
    int myArray[4] = {1, 2, 3, 4};
    int newArray[5];
    memcpy(newArray, myArray, sizeof(myArray));
    newArray[4] = 5;

    for (int i = 0; i < 5; i += 1) {
        printf("%d\n", newArray[i]);
    }

    // strings array
    // Write a program to find the greatest value of an array and print it out
    int array[] = {2, 5, 8, 9, 6, -3, 11};
    int greatestIndex = 0;
    for (int i = 0; i < 7; i += 1) {
        if (array[i] > array[greatestIndex]) {
            greatestIndex = i;
        }
    }
    printf("%d\n", array[greatestIndex]);

    // Write a program to count the number of 0's in the array
    int myArray[] = {1, 0, 8, 0, 6, -3, 0, 0};
    int counter = 0;
    for (int j; j < 8; j += 1) {
        if (myArray[j] == 0) {
            counter += 1;
        }
    }
    printf("%d", counter);

    // Format specifier for char is %c
    // Format specifier for string is %s
    // fgets(string, numberOfCharacters, stream)

    // strcpy copies string2 to string 1
    // strcpy(string1, string2);
    //------
    // strcat concatenates string2 onto the end of string1
    // strcat(string1, string2);
    //------
    // strlen returns the length of the string (does not include the null character)
    // strlen(string);
    //------
    //strcmp compares string 1 and string 2 and return 0 if they are the same <0 
    //^^if string1 "comes before" string2, and >0 if string1 "comes after" string2
    // strcmp(string1, string2);
    //     number of strings  | max size
    //    // char shopping list[3][10] = {"...", "..."}

    char string3[7] = {'B', 'a', 'n', 'a', 'n', 'a', '\0'};
    int result = strcmp(string1, string2);
    printf("%i \n", result); // 0

    int result = strcmp(string1, string3);
    printf("%i \n", result); // -1

    strcat(string1, string3);
    printf("%s \n", string1);

    for (int i = 0; i < strlen(string2); i += 1) {
        printf("=%c \n", string2[i]);
    }
    //-----------
    char myArrayOfString[3][10];

    for (int i = 0; i < 3; i += 1) {
        char userString[10];
        fgets(userString, 10, stdin);

        if (userString[strlen(userString) - 1] == '\n') {
            userString[strlen(userString) - 1] = '\0';
        }
        strcpy(myArrayOfString[i], userString);

    }
    for (int i = 0; i < 3; i += 1) {
        printf("%s \n", myArrayOfString[i]);
    }

    //--- LOop
    int myInt = 5;

    while (myInt >= 0) {
        int greaterThan = myInt;
        while (greaterThan > 0) {
            greaterThan -= 1;
            printf("%d\n", greaterThan);
        }
        myInt -= 1;
    }

    int newInt = 5;
    while (1) {
        newInt -= 1;
        printf("%d\n", newInt);
        if (newInt <= 0)
            break;
    }

    int seInt = 5;
    while (seInt > 0) {
        seInt -= 1;
        if (seInt == 3)
            continue;
        printf("%d\n", seInt);
    }

    // --- pointer
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

    //    FILE *fp;
    //    fp = fopen("exampleFile.txt", "r");
    //    fscanf(file, formatSpecifiers, adresses);
    //    fgets(string, numberOfCharacters, stream)
    // getc(file)
    // putc(character, file)
    // fclose(file);
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

    int *pInteger;
    int integer = 5;
    int *pInteger2;  // If set = to NULL would print nothing

    pInteger = &integer;
    printf("%d\n", pInteger); // prints memory space 6422296
    printf("%d\n", *pInteger); // prints memory space value 5

    integer = 10;
    printf("%d\n", *pInteger); // prints memory space value 10

    pInteger2 = pInteger;
    integer = 15;

    printf("%d\n", *pInteger2); // prints 0


    int *arrayOfPointers[5] = {NULL, NULL, NULL, NULL, NULL};
    int arrayOfInteger[5] = {1, 2, 3, 4, 5};
    int integer1 = 1, integer2 = 2, integer3 = 3, integer4 = 4, integer5 = 5;

    for (int i = 0; i < 5; i += 1) {
        arrayOfPointers[i] = &arrayOfInteger[i];

    }

    for (int i = 0; i < 5; i += 1) {
        printf("%d\n", *arrayOfPointers[i]);
    }

    for (int i = 0; i < 5; i += 1) {
        arrayOfInteger[i] *= 2 *;
    }

    char *myStringPointers[] = {"Hello", "World"};

    printf("%s\n", myStringPointers[0]); // Hello

    myStringPointers[0] = "World";

    printf("%s\n", myStringPointers[0]); // World


    int *intArrayPointer = (int *) malloc(10 * sizeof(int));
    intArrayPointer[0] = 1;
    printf("%d", intArrayPointer[0]);

    int size = 10;
    int *intArrayPointer = malloc(size * sizeof(int));

    int **intPointerArrayPointer = malloc(size * sizeof(int *));

    int arrayOfInts[4] = {1, 2, 3, 4};
    int *pointerToInts = malloc(4 * sizeof(int));
    int *pointerToInts = calloc(4, sizeof(int));   // set to 0

    pointerToInts = realloc(pointerToInts, 5 * sizeof(int));

    if (pointerToInts == NULL) {
        printf("Memory could not be allocated");
    } else {
        for (int i = 0; i < 4; i += 1) {
            pointerToInts[i] = i + 1;
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
    FILE *fp;
    int myInt;
    char myChar;
    char myString[13];
    fp = fopen("exampleInput.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
    } else {
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
    FILE *fp;
    char myInt = '7';
    char myChar = 'k';
    char myString[13] = {"Hello world!"};
    fp = fopen("exampleInput.txt", "w");

    if (fp == NULL) {
        printf("File not found\n");
    } else {
        fprintf(fp, "\n%d and %c", myInt, myChar);  // in txt file
        putc('\n', fp);  // in txt file
        putc(myInt + '0', fp);
        putc(' ', fp);
        putc(myChar, fp);

    }
}
    
    // ------Functions
#define ROWS 3
#define COLUMNS 4

// returnType functionName(type arguementName1, type arguementName2, ....);

// function with no output variables
// void functionWithoutInputOrOutput();

// float sumArray(float myArray[]);

float getSum(float value1, float value2);
double getVolume(double length, double width, double height);
float getUserInput();
void canCookiesFit(double volume);
void fixUserInput(float *value);

void getRowSums(int arrayToSum[ROWS][COLUMNS], int rowSums[]);

int main() {

    float sum, number1 = 35, number2 = 5;
    sum = getSum(number1, number2);
    // or
    sum = getSum(35, 5);
    // or
    sum = getSum(35, number2);
    printf("%f", sum);
    // or
    printf("%f", getSum(number1, number2));
//-------------
    //float l = 10, w = 10, h = 9;
    float l, w, h;
    l = getUserInput();
    w = getUserInput();
    h = getUserInput();

    fixUserInput(&l);
    fixUserInput(&w);
    fixUserInput(&h);

    float volume = getVolume(l, w, h);
    printf("%f\n", volume);

    canCookiesFit(volume);

    int myArray[3][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};
    int rowSums[ROWS];

    getRowSums(myArray, rowSums);
    for(int i = 0; i < ROWS; i += 1) {
        printf("%d\n", rowSums[i]);
    }

    myArray[0][0] = 10;
    getRowSums(myArray, rowSums);
    for(int i = 0; i < ROWS; i += 1) {
        printf("%d\n", rowSums[i]);
    }


}

float getSum(float value1, float value2) {
    float sum = value1 + value2;
    return sum;
}

double getVolume(double length, double width, double height) {
    return length * width * height;
}

float getUserInput() {
    float userValue;
    scanf("%f", &userValue);
    return userValue;
}

void canCookiesFit(double volume) {
    if (volume>100) {
        printf("The cookies will fit");
    }else {
        printf("The cookies will not fit");
    }
}

void fixUserInput(float *value) {
    if (*value <=  0) {
        *value = 10;
    }
}

void getRowSums(int arrayToSum[ROWS][COLUMNS], int rowSums[]) {
    for (int i = 0; i < ROWS; i += 1) {
        int sum = 0;
        for (int j = 0; j < COLUMNS; j += 1) {
            sum += arrayToSum[i][j];
        }
        rowSums[i] = sum;
    }
}

// recursion
void example(int n){
    if(n<0){
        return;
    }
    example(n-1);
}

float countCoins(float coins[], int numCoins) {
    if(numCoins<=1)
        return coins[numCoins-1];
    return coins[numCoins-1]+countCoins(coins, numCoins-1);
}


#include <stdio.h>
#include <math.h>

int main() {
    //500000.00 interest rate of %2 per year (0.02)
    int years;
    printf("How many years would you like to invest for?\n");
    scanf("%d", &years);

    float value = 500000*pow((1+0.02), years);
    printf("%0.02f", value);
}

#include <stdio.h>
int main() {
   // decrease x by y until x is less than 1
   int x;
   int y;
   scanf("%d %d\n", &x, &y);

   while(x >= 1) {
       printf("%d\n", x);
       x -= y;
   }
}

#include <stdio.h>
#include <string.h>

#define VOUELS 10

int main() {
    // count number of vouels
    char string[100];
    scanf("%s", string);

    char vouels[VOUELS] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int counter = 0;
    char index;
    for(int i = 0; i < strlen(string); i += 1) {
        index = string[i];
        for(int j = 0; j < VOUELS; j += 1) {
            if(index==vouels[j]){
                counter += 1;
            }
        }
    }
    printf("%d", counter);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    // 5 int values on each line, read info, store in array, print out values all on one line
    FILE *fp;
    fp = fopen("information.txt", 'r');

    int information[5];

    for(int i = 0; i < 5; i += 1) {
        fscanf(fp, "%d", information[i]);
    }

    for(int i = 0; i < 5; i += 1) {
        printf("%d", information[i]);
    }
}

#include <stdio.h>
// rewrite recursive function
// int f(int i) {
//     if (i ==1) {
//         return(i);
//     }
//     else {
//         return(i*f(i-1));
//     }
// }
int f(int i) {
    int x = i;
    for(int j = i - 1; j > 1; j -= 1) {
        x *= j;
    }
    return (x);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", f(x))

}
#include <stdio.h>
#include <string.h>

int main(){
    char stringIn[11]; //holds 10 char long string and null char
    fgets(stringIn, 11, stdin); //fill the string
    char stringA[6]; //holds 5 char long string with null char
    char stringB[6]; //holds 5 char long string with null char

    // v v v Your code here v v v
    // Add null char to the ends of the two new strings
    stringA[5] = '\0';
    stringB[5] = '\0';
    // Loop through all letters in the original string (indices 0 – 9)
    for(int i = 0; i < 10; i++){
        // if the letter is in the first half (indices 0 – 4) then add to stringA, otherwise StringB
        if(i < 5){
            stringA[i] = stringIn[i];
        }else {
            stringB[i-5] = stringIn[i];
        }
    }
    // ^ ^ ^ Your code here ^ ^ ^

    printf("original string = %s\n", stringIn);
    printf("first string = %s\n", stringA);
    printf("second string = %s\n", stringB);
    return 0;
}
#include <stdio.h>


int main(){

    int sales[4][7];
    for(int m=0;m<4;m++) {
        for (int n = 0; n < 7; n++) {
            printf("Please enter the sale for branch %d at day %d: ", m + 1, n + 1);
            scanf("%d", &sales[m][n]);
        }
    }

// v v v Your code here v v v
    float sum[4]={0,0,0,0};
    int d=0;
    for(int i=0;i<4;i++){
        for (int j=0;j<7;j++){
            sum[i]=sum[i]+sales[i][j];
        }
        if (sum[i]>=sum[d])
            d=i;
    }
// ^ ^ ^ Your code here ^ ^ ^

    printf("Branch %d has sold the most this week.",d+1);
    return 0;
}
