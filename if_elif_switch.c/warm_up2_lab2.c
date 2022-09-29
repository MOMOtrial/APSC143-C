
#include <stdio.h>
#include <math.h>


int main() {
    //Get user input
    int a, b, c;
    printf("Enter values for a, b, c: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Entered values were %d %d %d\n", a, b, c);

    // Calculate roots
    float root1, root2;
    root1 = (-b + sqrt(pow(b, 2)) - 4*a*c)/(2*a);
    root2 = (-b + sqrt(pow(b, 2)) - 4*a*c)/(2*a);

    // Print results
    printf("The roots of the equation are %.2f and %.2f\n", root1, root2);

    return 0;
}
