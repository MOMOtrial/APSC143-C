#include <stdio.h>
#include <math.h>
#define TIME 0.01

// Define function
double getUserInput();
double recursive(double time, double ammonia, double oxygen, double nitrogen, double water);

int main() {
    // Collect initial concentrations
    printf("Enter initial ammonia and oxygen concentrations:\n");
    double ammonia = getUserInput();
    double oxygen = getUserInput();

    // Call recursive function
    recursive(0, ammonia, oxygen, 0, 0);
}

// Collect User input
double getUserInput() {
    double userValue;
    scanf("%lf", &userValue);
    return userValue;
}

// Recursive function
double recursive(double time, double ammonia, double oxygen, double nitrogen, double water) {
    double rate = 0.0965*ammonia*pow(oxygen, 2);
    double ammoniaRate = ammonia - rate*4*TIME;
    double oxygenRate = oxygen - rate*3*TIME;
    double nitrogenRate = nitrogen + rate*2*TIME;
    double waterRate = water + rate*6*TIME;
    double timeTotal = time+TIME;

    // print output
    if (rate <= 0.001){
        printf("Final Reaction Molarities:\n");
        printf("NH3: %0.2f M\n", ammoniaRate);
        printf("02: %0.2f M\n", oxygenRate);
        printf("N2: %0.2f M\n", nitrogenRate);
        printf("H20: %0.2f M\n", waterRate);
        printf("The reaction will take %0.2f seconds to reach a rate 0.001 M/s.\n", timeTotal);

    }

    // recursive step
    else {
        recursive(timeTotal, ammoniaRate, oxygenRate, nitrogenRate, waterRate);
    }
}
