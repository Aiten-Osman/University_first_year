#include <stdio.h>

int main() {
    float x, y, w, pool_area, total_area, path_area;

    printf("Въведете дължина на басейна x: ");
    scanf("%f", &x);
    printf("Въведете ширина на басейна y: ");
    scanf("%f", &y);
    printf("Въведете ширина на пътеката w: ");
    scanf("%f", &w);

    pool_area = x * y;
    total_area = (x + 2 * w) * (y + 2 * w);
    path_area = total_area - pool_area;

    printf("Лицето на пътеката е: %.2f\n", path_area);

    return 0;
}