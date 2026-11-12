#include <stdio.h>

int main() {
    float x1, y1, x2, y2, mx, my;

    printf("Въведете x1, y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Въведете x2, y2: ");
    scanf("%f %f", &x2, &y2);

    mx = (x1 + x2) / 2;
    my = (y1 + y2) / 2;

    printf("Среда: (%.2f, %.2f)\n", mx, my);

    return 0;
}