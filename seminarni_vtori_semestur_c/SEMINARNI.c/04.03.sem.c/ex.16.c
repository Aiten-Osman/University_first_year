#include <stdio.h>

int main() {
    float L, x, days;

    printf("Въведете дължина на стената L: ");
    scanf("%f", &L);
    printf("Въведете метри на ден x: ");
    scanf("%f", &x);

    days = L / x;

    printf("Необходими дни: %.2f\n", days);

    return 0;
}