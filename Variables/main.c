#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Variable sub in --> format specifiers
// %d = intergers (int)
// %f = float  %[width].[precision][type]
//%c = characters (char)
int main() {
    float height = 16;
    int age = 32;
    printf("Height is %f and age is %d\n", height, age);

    float y = 4.83;
    printf("\tThe value of y is %8.2f", y);

    char example = '\"';
    printf("%c", example);
}

// Addition -> +
// Subtraction -> -
// Multiplication -> *
// Division -> /
// Modulus -> % gives remainder of division

int main() {
    int y = 5;
    y += 5;
    printf("%d", y);
}

int main() {
    int radius = 4;
    float area = PI * pow(radius, 2);
    printf("The area pf the circle is %f", area);
}
