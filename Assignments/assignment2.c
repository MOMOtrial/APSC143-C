//
// Created by Michael Moser on 2022-09-17.
// I attest to the originality of my work
//

#include <stdio.h>
#include <math.h>
#define N 9.81

int main() {
    // Declare variables
    float mass;
    float boxSpringMass;
    float throneMass;
    float massN;
    float time;
    int students;
    int min;
    int sec;


    // Get user input
    printf("Enter the mass of the box spring in kg:");
    scanf("%f", &boxSpringMass);

    printf("Enter the mass of the throne in kg:");
    scanf("%f", &throneMass);

    // Calculate total mass in pounds
    mass = boxSpringMass + throneMass;
    printf("\n");

    // Calculate mass in Newtons
    massN = mass * N;

    // Calculate number of students needed to lift the ThunderMug
    // One extra student added to assure safety
    students = ceil(massN/300);
    printf("The ThunderMugz will need a minimum of %d students to carry it.\n", students);

    //Calculate time
    //𝑡𝑖𝑚𝑒 = 𝑚𝑎𝑠𝑠 ∗ (4 − 𝑒^0.1𝑠𝑡𝑢𝑑𝑒𝑛𝑡𝑠)
    time = mass * (4 - pow(M_E, 0.1*students));
    int roundedTime = time;
    min = time / 60;
    sec = roundedTime % 60;
    printf("It will take %d minutes and %d seconds to complete the ThunderMugz challenge.", min, sec);
}
