#include <stdio.h>

int main() {
    double inches;
    
    printf("Insert inches: ");
    scanf("%lf", &inches);
    
    double mm = inches * 25.4;
    double cm = inches * 2.54;
    double dm = inches * 0.254;
    double m = inches * 0.0254;
    
    printf("%.2f inch = %.2f mm\n", inches, mm);
    printf("%.2f inch = %.2f cm\n", inches, cm);
    printf("%.2f inch = %.2f dm\n", inches, dm);
    printf("%.2f inch = %.2f m\n", inches, m);
    
    return 0;
}