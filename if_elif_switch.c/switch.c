
//switch (controllingVariable) {
//    case value1:
//        // code is controllingVariable == value1
//        break;
//    case value2:
//        // code is controllingVariable == value2
//        break;
//    default:
//        // code to run if none of the cases are correct
//        break;
//}

#include <stdio.h>

// if and else if
int main() {
    printf("Enter an integer between 0 and 5\n");

    int myInt;
    scanf("%d", &myInt);

    if (myInt==5)
        printf("%d", 4);
    else if (myInt==4)
        printf("%d", 3);
    else if (myInt==3)
        printf("%d", 2);
    else if (myInt==2)
        printf("%d", 1);
    else if (myInt==1)
        printf("%d", 0);
    else
        printf("The value is not greater than any int between 0 and 5");
}

//-----------------------------------------
#include <stdio.h>

int main() {
    printf("Enter an integer between 0 and 5\n");

    int myInt;
    scanf("%d", &myInt);
// if wanna keep going through cases get rid of break
    switch (myInt) {
        case 5:
            printf("$d", 4);
            break;
        case 4:
            printf("%d", 3);
            break;
        case 3:
            printf("%d", 2);
            break;
        case 2:
            printf("%d", 1);
            break;
        case 1:
            printf("%d", 0);
            break;
        default:
            printf("The value is not greater than any int between 0 and 5");
            break;
    }
}
