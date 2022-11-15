#include <stdio.h>
#include <math.h>

double getUserInput();
double getRiemannSum(double x, double y, int a);
double getTaylorSum(double x, double y, int a);
double getTaylor(double x, int total);
double error(double x, double y, double a);
int factorial(int x);

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
    printf("Error in Riemann Sums with 5 intervals: -%0.2lf\n", error(leftBound, rightBound, 5));
    printf("Error in Riemann Sums with 25 intervals: -%0.2lf\n", error(leftBound, rightBound, 25));
    printf("Error in Riemann Sums with 100 intervals: -%0.2lf\n", error(leftBound, rightBound, 100));
}


double getUserInput() {
    double userValue;
    scanf("%lf", &userValue);
    return userValue;
}

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

double getTaylor(double x, int total) {
    double taylor = 1;
    for (int i = 1; i < total; i += 1) {
        taylor = taylor + (pow((pow(x, 2)), i))/factorial(i);
    }
    return taylor;
}

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

int factorial(int x) {
    int fact = x;
    if (x==0) {
        fact = 1;
    }else {
        for(int i = x - 1; i > 0; i += 1) {
            fact = fact + 1;
        }
    }
    return fact;
}

double error(double x, double y, double a) {
    double error = 1 - getTaylorSum(x, y, a)/ getRiemannSum(x, y, a);
    error = 100*error;
    return error;
}
