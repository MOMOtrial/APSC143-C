#include <stdio.h>
#include <math.h>

int main() {
    int myInt = 5;

    while(myInt >= 0) {
        int greaterThan = myInt;
        while (greaterThan > 0) {
            greaterThan -= 1;
            printf("%d\n", greaterThan);
        }
        myInt -= 1;
    }

    int newInt = 5;
    while (1) {
        newInt -= 1;
        printf("%d\n", newInt);
        if (newInt <= 0)
            break;
    }
    
    int seInt = 5;
    while (seInt > 0) {
        seInt -= 1;
        if (seInt == 3)
            continue;
        printf("%d\n", seInt);
    }
}
