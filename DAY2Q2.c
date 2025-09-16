#include <stdio.h>

int main() {
    float radius, circumference, area;

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area of the circle = %f\n", area);
    printf("Circumference of the circle = %f\n", circumference);

    return 0;
}
