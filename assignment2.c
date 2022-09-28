#include <stdio.h>
#include <math.h>

int main() {
    // Get user input
    float time;
    float sourceVoltage;
    printf("Enter time in seconds: \n");
    scanf("%f", &time);

    // Compute sourceVoltage
    sourceVoltage = 8 * (cos(M_PI * time));
    if (sourceVoltage > 0)
        printf("Source voltage is positive\n");
    else if (sourceVoltage < 0)
        printf("Source voltage is negative\n");
    else
        printf("Source voltage is 0\n");

    // Calculate current and voltage going through the light bulb
    float currentLight = sourceVoltage/10;
    float voltageLight = currentLight*8;

    // Determine if switches are open or closed
    if (sourceVoltage < -0.7) {
        printf("Switch 1 is closed\n");
        voltageLight = 0.00;
    }

    if (voltageLight > 6.4) {
        printf("Switch 2 is closed\n");
        voltageLight = 0.00;
    }

    printf("The Voltage of the bulb is %0.2f V\n", voltageLight);

    if (voltageLight > 0)
        printf("The bulb is on\n");
    else
        printf("The bulb is not on\n");

}
