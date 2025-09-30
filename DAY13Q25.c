#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter the expression ( e.g. , 5 6 +): ");
    scanf ("%lf %lf %c" , &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Output: %.0f\n", result );
            break;
        case '-':
            result = num1 - num2;
            printf("Output: %.0f\n", result );
            break;
        case '*':
            result = num1 * num2;
            printf("Output: %.0f\n", result );
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            }
            else {  result = num1 / num2;
                    printf("Output: %.4f\n", result);
            }
            break;
    }

    return 0;
}