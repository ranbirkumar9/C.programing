#include <stdio.h>
int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) lies in Quadrant I.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) lies in Quadrant II.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) lies in Quadrant III.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) lies in Quadrant IV.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%d, %d) lies at the Origin.\n", x, y);
    else if (x == 0)
        printf("The point lies on Y-axis.\n");
    else
        printf("The point lies on X-axis.\n");

    return 0;
}
