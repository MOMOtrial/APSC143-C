#include <math.h>
#include <stdio.h>

int main() {
    // Declare given values
    int mediumRadius = 12;
    int largeRadius = 14;

    //Find area of each
    float medium_area = M_PI * pow(mediumRadius, 2);
    float large_area = M_PI * pow(largeRadius, 2);

    printf("Sizes:\nMedium = %.0f in^2\nLarge = %.0f in^2\n", medium_area, large_area);

    float mediumPrice = 11.39;
    float largePrice = 14.39;

    // Find rate
    mediumPrice /= medium_area;
    largePrice /= large_area;
    printf("Rates:\nMedium = %.2f/in^2\nLarge = %.2f/in^2\n", mediumPrice, largePrice);
    
    return 0;
}
