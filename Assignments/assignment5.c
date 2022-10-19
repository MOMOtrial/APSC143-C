#include <stdio.h>

int main() {
    // Declare variables
    int limestones=0;
    float porosity;
    float hydraulicConductivity;
    float specificGravity;
    int elements;
    int i, j;
    double gradient = 0.725;
    float area = 120000;

    // Collect user input
    printf("Enter the number of limestones to compare:\n");
    scanf("%d", &limestones);

    double outputArray[limestones][2];
    //elements = 1;
    for(i=0; i < limestones; i += 1) {
        printf("Enter the porosity %%, hydraulic conductivity (m/s), and specific gravity for Limestone %d:\n", i + 1);
        scanf("%lf", &outputArray[i][0]);
        scanf("%lf", &outputArray[i][1]);
        scanf("%lf", &outputArray[i][2]);
    }

    // Determine limestone with lowest specific gravity
    for(i = 0, j = 1; i < limestones, j < limestones; j += 1) {
        double a = outputArray[i][2];
        double b = outputArray[j][2];
        if (b < a)
            i = j;
    }
    printf("The limestone with the lowest specific gravity is Limestone %d with a specific gravity of %0.4lf.\n", i +1, outputArray[i][2]);

    // Copy array to new arry creating a new column
    double array[limestones][4];
    // Copy the data
    for (i = 0; i<limestones; i +=1){
        for(j=0; j<3; j+=1) {
            array[i][j] = outputArray[i][j];
        }
    }

    //Calculate flow velocity by creating new column
    printf("Flow velocities:\n");
    for(i=0; i < limestones; i += 1) {
        array[i][3] = 10000*((array[i][1])*area*gradient);
        printf("Limestones %d: %0.2lf cm^3/s\n", i+1, array[i][3]);
    }

    // calc greatest velocity
    int greatestVel;
    for (i = 0, j = 1; j < limestones; j += 1) {
        double num = array[i][3];
        double compare = array[j][3];
        if(compare>num){
            i = j;
        }
    }

    // calc greatest porosity
    greatestVel = i;
    int greatestPorosity;
    for(i=0,j=1;j<limestones;j+=1) {
        double num = array[i][0];
        double compare = array[j][0];
        if (compare>num){
            i = j;
        }
    }
    greatestPorosity=i;

    // Print out if the highest flow and porosity are the same
    if (greatestVel == greatestPorosity){
        printf("The rock with the highest porosity has the highest flow velocity.\n");
    }
    else {
        printf("The rock with the highest porosity does not have the highest flow velocity.\n");
    }


}
