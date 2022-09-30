de <stdio.h>
#include <math.h>

int main() {
    // Give 10 second count down
    int counter = 10;
    while (counter >= 0) {
        printf("%d\n", counter);
        counter -= 1;
    }

//    do {
//        // code to run, then repeat if expression is true
//        // semi colon must be placed after while
//    } while (expression);

    do {
        printf("%d\n", counter);
        counter -= 1;
    } while (counter>=0);   // stop looping when counter = 0

// for (initial value; stopping expression; update expression) {
    // code to run
// }

    for (int i = 10; i >= 0; i -= 1){
        printf("%d\n", i);
    }

    printf("Enter an integer between 0 and 5\n");
    int myInt;
    scanf("d", &myInt);

    if (myInt>0) {
        while (myInt>0) {
            myInt -= 1;
            printf("%d", myInt);
        }
    }

    do {
        myInt -= 1;
        printf("%d\n", myInt);
    } while (myInt>0);

    for (int i = myInt-1; i >= 0; i-=1) {
        printf("%d\n", i)

    }
}
