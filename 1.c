#include <stdio.h>

int main() {
    float centigrade, fahrenheit;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);

    fahrenheit = (9 * centigrade) / 5 + 32;

    printf("%.2f Centigrade = %.2f Fahrenheit\n", centigrade, fahrenheit);

    return 0;
}
