#include <stdio.h>
int main() {
    float temperature, Fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    Fahrenheit = ( temperature * 9/5 ) + 32 ;
 
    printf("Temperature in Fahrenheit = %f\n", Fahrenheit);
 
    return 0;
}
