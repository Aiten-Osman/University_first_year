#include <stdio.h>
#include <math.h>

float squareArea(float side) {
    return side * side;
}

float rectangleArea(float width, float height) {
    return width * height;
}

float rightTriangleArea(float a, float b) {
    return (a * b) / 2;
}

float circleArea(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int code;
    
    printf("Изберете фигура:\n");
    printf("1 - Квадрат\n");
    printf("2 - Правоъгълник\n");
    printf("3 - Правоъгълен триъгълник\n");
    printf("4 - Окръжност\n");
    printf("Въведете код: ");
    scanf("%d", &code);
    
    switch(code) {
        case 1: {
            float side;
            printf("Въведете страна: ");
            scanf("%f", &side);
            printf("Фигура: Квадрат\n");
            printf("Лице: %.2f\n", squareArea(side));
            break;
        }
        case 2: {
            float width, height;
            printf("Въведете ширина: ");
            scanf("%f", &width);
            printf("Въведете височина: ");
            scanf("%f", &height);
            printf("Фигура: Правоъгълник\n");
            printf("Лице: %.2f\n", rectangleArea(width, height));
            break;
        }
        case 3: {
            float a, b;
            printf("Въведете първи катет: ");
            scanf("%f", &a);
            printf("Въведете втори катет: ");
            scanf("%f", &b);
            printf("Фигура: Правоъгълен триъгълник\n");
            printf("Лице: %.2f\n", rightTriangleArea(a, b));
            break;
        }
        case 4: {
            float radius;
            printf("Въведете радиус: ");
            scanf("%f", &radius);
            printf("Фигура: Окръжност\n");
            printf("Лице: %.2f\n", circleArea(radius));
            break;
        }
        default:
            printf("Грешен код!\n");
    }
    
    return 0;
}