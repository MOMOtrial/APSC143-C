#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
