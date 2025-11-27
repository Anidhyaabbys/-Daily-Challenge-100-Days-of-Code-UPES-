//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    char bin[100];

    printf("Enter a binary number: ");
    scanf("%s", bin);

    // Convert each 0 -> 1 and 1 -> 0
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
    }

    printf("1's Complement = %s", bin);

    return 0;
}
