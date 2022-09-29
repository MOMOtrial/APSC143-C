#include <math.h>
#include <stdio.h>


int main() {
    // Define variables for user input
    float length, width, height;

    // Retrieve dimensions from user inout
    printf("Enter length, width and height of box:");
    scanf("%f %f %f", &length, &width, &height);

    // Calculate the volume of the cardboard box
    float volume = length * width * height;
    printf("The box is %.2f cm3\n", volume);

    // Calculate # of cookies that will fit in the box
    // 2 rows across, 1 layer high
    int cookieCount = length/1.8;
    cookieCount *= 2;
    printf("%d cookies can fit into the box\n", cookieCount);

    // Calculate percentage of the box that is filled with cookies
    float cookieVolume = cookieCount * M_PI * pow(2.6, 2) * 1.8;
    float cookiePercentage = cookieVolume / volume * 100;

    // Calculate the price of the cookie box
    float cardboardPrice = 0.003;
    cardboardPrice *= 2 * (length*width + length*height + width*height); //surface area
    float cookiePrice = 0.0082;
    cookiePrice *= cookieVolume;
    float totalPrice = (cardboardPrice + cookiePrice) * 1.23;

    return 0;
}
