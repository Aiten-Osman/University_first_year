#include <stdio.h>

int main() {
    double length, width;
    
    printf("Insert length and width of the room (in meters): ");
    scanf("%lf %lf", &length, &width);
    
    // 1 работно място = 70 см x 120 см = 0.7 m x 1.2 m
    double place_width = 0.7;
    double place_length = 1.2;
    
    // Коридор по средата – ширина минимум 1 метър
    // Значи от ширината вадим 1 м за коридор
    double useful_width = width - 1.0;
    
    // Брой места на ред отляво и отдясно
    int places_per_row_left = (int)(useful_width / 2 / place_width);
    int places_per_row_right = (int)(useful_width / 2 / place_width);
    
    // Брой редове по дължина
    int rows = (int)(length / place_length);
    
    // Общо места без загуби
    int total = (places_per_row_left + places_per_row_right) * rows;
    
    // Загуби: 1 място за врата, 2 места за катедра
    total = total - 1 - 2;
    
    printf("Number of work places: %d\n", total);
    
    return 0;
}