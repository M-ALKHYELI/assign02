
#include "tinyexpr.h"
#include <stdio.h>
#include <string>

// struct for grouping variables
struct variables
{
    char   input[256];
    char   userChoice;
    double result;
};

int main(int argc, char *argv[])
{
    // Test input: (3*5^2/15)-(5-2^2)
    // Test output: 4
    struct variables var;
    do {

        printf("Enter the expression: ");
        scanf("%s", var.input);

        //solve the problem
        var.result = te_interp(var.input, 0);

        //print the result
        printf("The answer to this problem is %f\n", var.result);

        printf("Do you want to solve another problem? (Y/N): ");
        scanf(" %c", &var.userChoice);
        
    } while (std::toupper(var.userChoice) == 'Y');

    printf("Thank you for using this calculator!\n");

    return 0;
}
