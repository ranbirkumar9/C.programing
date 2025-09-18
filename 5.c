#include <stdio.h>
int main() {
    int maths, physics, chemistry, total, mp_total;
    printf("Enter marks in Maths, Physics and Chemistry: ");
    scanf("%d %d %d", &maths, &physics, &chemistry);

    total = maths + physics + chemistry;
    mp_total = maths + physics;

    if (maths >= 65 && physics >= 55 && chemistry >= 50 &&
       (total >= 190 || mp_total >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
    return 0;
}
