#include <stdio.h>

int main() {
    int N, W, L, M, O;
    float area_plate, bench_area, area_to_cover, tiles_needed, time_needed;

    printf("Въведете страна на площадката N: ");
    scanf("%d", &N);
    printf("Въведете ширина на плочка W: ");
    scanf("%d", &W);
    printf("Въведете дължина на плочка L: ");
    scanf("%d", &L);
    printf("Въведете ширина на пейка M: ");
    scanf("%d", &M);
    printf("Въведете дължина на пейка O: ");
    scanf("%d", &O);

    area_plate = N * N;
    bench_area = M * O;
    area_to_cover = area_plate - bench_area;
    tiles_needed = area_to_cover / (W * L);
    time_needed = tiles_needed * 0.2;

    printf("Необходими плочки: %.2f\n", tiles_needed);
    printf("Време за поставяне: %.2f минути\n", time_needed);

    return 0;
}