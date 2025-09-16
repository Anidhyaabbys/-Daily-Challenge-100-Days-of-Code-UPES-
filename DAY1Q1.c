#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
