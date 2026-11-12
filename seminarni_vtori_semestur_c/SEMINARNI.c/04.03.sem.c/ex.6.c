#include <stdio.h>

int main() {
    double a, b, h;
    
    printf("Insert the two bases and height: ");
    scanf("%lf %lf %lf", &a, &b, &h);
    
    double area = (a + b) * h / 2;
    
    printf("The area of the trapezoid is: %.2f\n", area);
    
    return 0;
}