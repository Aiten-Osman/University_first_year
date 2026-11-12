#include <stdio.h>

int main() {
    int s, count10, count5, count2, count1;

    printf("Въведете сума s: ");
    scanf("%d", &s);

    count10 = s / 10;
    s = s % 10;

    count5 = s / 5;
    s = s % 5;

    count2 = s / 2;
    s = s % 2;

    count1 = s;

    printf("Монети от 10 лв: %d\n", count10);
    printf("Монети от 5 лв: %d\n", count5);
    printf("Монети от 2 лв: %d\n", count2);
    printf("Монети от 1 лв: %d\n", count1);

    return 0;
}