// == equal  to
// != not equal to
// > greater than
// >= greater than or equal to
// < less than
// <= less than or equal to

// && true if both expressions are true, false otherwise
// (weight < 70) && (volume >= 12);

// || true if either expression is true. false otherwise
// weight < 70) || (volume >- 12);

//if (expression)
    // if (expression)
        //words
    //else
        // words
//else if (expression)
#include <stdio.h>

// if and else if
int main() {
    int variable1;
    int variable2;

    printf("Input two numbers\n");
    scanf("%d", &variable1);
    scanf("%d", &variable2);

    int sum = variable1 + variable2;

    if (sum>20)
        printf("Sum is greater than 20\n");
    else if (sum>10)
        printf("The sum is greater than 10\n");
    else
        printf("The sum is not greater than 10\n");

    // or
    // variable = (logical expression) ? valueIfTrue : valueIfFalse
    // variable = (logical expression) ? expressionIfTrue : expressionIfFalse
    (sum>10) ? printf("The sum is greater than 10\n") : printf("The sum is not greater than 10\n");

    // -----------------

    int newsum = ((variable1 + variable2)>0) ? variable1 + variable2 : 0;
    printf("%d", newsum);
}
