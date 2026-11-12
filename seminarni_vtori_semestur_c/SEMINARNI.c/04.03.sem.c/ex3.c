#include <stdio.h>

int main() {
    double celsius;
    
    printf("insert degrees Celsius: ");
    scanf("%lf", &celsius);
    
    double fahrenheit = celsius * 9 / 5 + 32;
    
    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
    
    return 0;
}