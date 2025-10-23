// main.c
#include <stdio.h>
#include "operations.h"

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
    return 0;
}

// Type this in terminal
/* 
gcc main.c add.c subtract.c multiply.c divide.c -o calculator
./calculator
*/
