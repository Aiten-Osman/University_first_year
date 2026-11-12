#include <stdio.h>

int main() {
    double degrees;
    
    printf("Insert degrees: ");
    scanf("%lf", &degrees);
    
    double radians = degrees * 3.14159265359 / 180;
    
    printf("%.2f degrees = %.5f radians\n", degrees, radians);
    
    return 0;
}