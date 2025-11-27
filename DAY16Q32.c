#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num>0) {
        int digit = num % 10;         
        reversed = reversed * 10 + digit; 
        num /= 10;
    }
     
    if (original==reversed) {
        printf ("Yes the given number is palindrome number.\n");
    } else {
        printf ("No, the given number is not a palindrome number.\n");
    }

    
    return 0;
}