#include <stdio.h>

int main() {
    int total_sec, hours, minutes, seconds;

    printf("Въведете секунди: ");
    scanf("%d", &total_sec);

    hours = total_sec / 3600;
    total_sec = total_sec % 3600;
    minutes = total_sec / 60;
    seconds = total_sec % 60;

    printf("%d часа, %d минути, %d секунди\n", hours, minutes, seconds);

    return 0;
}