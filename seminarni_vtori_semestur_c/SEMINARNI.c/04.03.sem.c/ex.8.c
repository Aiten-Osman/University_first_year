#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    printf("Insert coordinates of point 1: ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Insert coordinates of point 2: ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Insert coordinates of point 3: ");
    scanf("%lf %lf", &x3, &y3);
    
    double area = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2;
    
    if (area < 0) area = -area;
    
    printf("The area of the triangle is: %.2f\n", area);
    
    return 0;
}