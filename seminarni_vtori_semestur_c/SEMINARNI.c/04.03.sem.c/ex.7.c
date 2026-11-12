#include <stdio.h>

int main() {
    double x1, y1, x2, y2;
    
    printf("Insert coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Insert coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double width = x2 - x1;
    if (width < 0) width = -width;
    
    double height = y2 - y1;
    if (height < 0) height = -height;
    
    double area = width * height;
    
    printf("The area of the rectangle is: %.2f\n", area);
    
    return 0;
}