#include <stdio.h>

/*
 * This is a weather app to tell us the weather.
 */

int main() {
    // Define variables
    float temperature;
    int precipitation;        // 0 or 1, true or false

    //assign values
    temperature = 5;
    precipitation = 1;      // False

    // check there is precipitation
    if (precipitation==1) {
        // check to see if temperature is >= 0
        if (0<=temperature)
            // display it is raining
            printf("It is raining.");

        // check to see if temperature is < 0
        else
            // display it is snowing
            printf("It is snowing.");
    }
    // check there is not precipitation
    else {
        // check to see if temperature is > 10
        if (temperature>10)
            // display the weather is nice
            printf("The weather is nice.");
        // check to see if temperature is between 0 and 10
        else if  (0 <= temperature <= 10)
            // display the weather is fine
            printf("The weather is fine.");
        // check to see if temperature is < 0
        else
            // display the weather is cold
            printf("The weather is cold.");
    }
}
