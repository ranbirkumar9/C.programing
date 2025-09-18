#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, volume;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    volume = (4 * PI * radius * radius * radius) / 3;

    printf("The volume of sphere is: %.6f\n", volume);

    return 0;
}
