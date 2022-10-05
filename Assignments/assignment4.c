#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double initialCost;
    double annuity;
    double interestRate;
    double pv = 0;
    int lifespan;
    
    // Collect user input
    printf("Enter the initial cost of the project: $\n");
    scanf("%lf", &initialCost);

    printf("Enter the annuity of the project: $\n");
    scanf("%lf", &annuity);

    printf("Enter the interest rate in %: \n");
    scanf("%lf", &interestRate);

    printf("Enter the lifespan of the project in years: \n");
    scanf("%d", &lifespan);

    // Equation PV = FV/(1+i)^n
    int i = 0;
    for (i = 1; i <= lifespan; i += 1) {
        pv = pv + (annuity / pow((1 + (interestRate / 100)), i));
    }

    // Calculate present value
    double value = pv - initialCost;

    // print if the value is profitable
    if (value > 0) {
        printf("Present worth of the project = $%0.2lf\n", value);
        printf("The project is economically feasible.\n");

        // Calculate payback
        pv = 0;
        int paybackPeriod = 0;
        while ((pv - initialCost) <= 0) {
            pv = pv + (annuity / pow((1+(interestRate/100)), paybackPeriod));
            paybackPeriod += 1;
        }
        printf("The payback period for this project is %d years.", paybackPeriod);
    }

    else {
        // value < 0
        value = -value;
        printf("Present worth of the project = -$%0.2lf\n", value);
        printf("The project is not economically feasible.\n");

        // Calculate payback
        pv = 0;
        int paybackPeriod = 0;
        while ((pv - initialCost) <= 0) {
            pv = pv + (annuity / pow((1+(interestRate/100)), paybackPeriod));
            paybackPeriod += 1;
        }
        printf("The payback period for this project is %d years.", paybackPeriod+1);
    }
}
