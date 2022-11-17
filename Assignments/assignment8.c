e <stdio.h>
#include <math.h>

// Define function
double error(double x, double y, int a);
double getTaylorSum(double x, double y, int a);
double getRiemannSum(double x, double y, int a);
double getUserInput();
double getTaylor(double v, int total);
int factorial(int num);

// Print output to terminal
int main() {
    printf("Enter the bounds to compute the Riemann Sum:");
    double leftBound = getUserInput();
    double rightBound = getUserInput();
    printf("Riemann Sum with 5 intervals: %0.2lf\n", getRiemannSum(leftBound, rightBound, 5));
    printf("Riemann Sum with 25 intervals: %0.2lf\n", getRiemannSum(leftBound, rightBound, 25));
    printf("Riemann Sum with 100 intervals: %0.2lf\n", getRiemannSum(leftBound, rightBound, 100));
    printf("--------------------------------------------------------\n");
    printf("Taylor Series Approximation at x = %0.2lf with 3 terms: %0.2lf\n", leftBound, getTaylor(leftBound, 3));
    printf("Taylor Series Approximation at x = %0.2lf with 5 terms: %0.2lf\n", leftBound, getTaylor(leftBound, 5));
    printf("Taylor Series Approximation at x = %0.2lf with 10 terms: %0.2lf\n", leftBound, getTaylor(leftBound, 10));
    printf("--------------------------------------------------------\n");
    printf("Taylor Series Riemann Sum with 5 intervals: %0.2lf\n", getTaylorSum(leftBound, rightBound, 5));
    printf("Taylor Series Riemann Sum with 25 intervals: %0.2lf\n", getTaylorSum(leftBound, rightBound, 25));
    printf("Taylor Series Riemann Sum with 100 intervals: %0.2lf\n", getTaylorSum(leftBound, rightBound, 100));
    printf("--------------------------------------------------------\n");
    printf("Error in Riemann Sums with 5 intervals: -%0.2lf%%\n", error(leftBound, rightBound, 5));
    printf("Error in Riemann Sums with 25 intervals: -%0.2lf%%\n", error(leftBound, rightBound, 25));
    printf("Error in Riemann Sums with 100 intervals: -%0.2lf%%\n", error(leftBound, rightBound, 100));
}

// Collect User input
double getUserInput() {
    double userValue;
    scanf("%lf", &userValue);
    return userValue;
}

// Get taylor approx
double getTaylor(double v, int total) {
    double taylor = 1;
    for (int i = 1; i < total; i += 1) {
        taylor = taylor + (pow((pow(v, 2)), i))/factorial(i);
    }
    return taylor;
}

// Get riemann sum
double getRiemannSum(double x, double y, int a) {
    double array[a];
    double xi;
    double sum = 0;
    double dx = (y-x)/a;
    for (int i = 0; i < a; i += 1) {
        xi = x + i * dx;
        array[i] = dx * (exp((xi*xi)));
    }
    for(int i = 0; i < a; i += 1) {
        sum += array[i];
    }
    return sum;
}

// Get taylor sum
double getTaylorSum(double x, double y, int a) {
    double array[a];
    double xi;
    double sum = 0;
    double dx = (y-x)/a;
    for (int i = 0; i < a; i += 1) {
        xi = x + i * dx;
        array[i] = dx * getTaylor(xi, 10);
    }
    for(int i = 0; i < a; i += 1) {
        sum += array[i];
    }
    return sum;
}

// Calculate error
double error(double x, double y, int a) {
    double error = 1 - getTaylorSum(x, y, a)/ getRiemannSum(x, y, a);
    error = 100*error;
    return error;
}

// Calculate factorial
int factorial(int num) {
    int fact = num;
    if (num==0) {
        fact = 1;
    }else {
        for(int i = num - 1; i > 0; i -= 1) {
            fact = fact*i;
        }
    }
    return fact;
}
