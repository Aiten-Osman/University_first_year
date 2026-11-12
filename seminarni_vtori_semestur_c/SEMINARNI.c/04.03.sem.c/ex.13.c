#include <stdio.h>

int main() {
    float a, b, radius;

    printf("Въведете дължина a: ");
    scanf("%f", &a);
    printf("Въведете ширина b: ");
    scanf("%f", &b);

    if (a < b) {
        radius = a / 2;
    } else {
        radius = b / 2;
    }

    printf("Най-големият радиус е: %.2f\n", radius);

    return 0;
}