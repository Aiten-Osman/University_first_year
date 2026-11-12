#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    printf("Въведете x1, y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Въведете x2, y2: ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Разстояние: %.2f\n", distance);

    return 0;
}