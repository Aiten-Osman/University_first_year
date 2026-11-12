#include <stdio.h>

int main() {
    double price_veg, price_fruit, kg_veg, kg_fruit;
    
    printf("Insert price per kg vegetables: ");
    scanf("%lf", &price_veg);
    
    printf("Insert price per kg fruits: ");
    scanf("%lf", &price_fruit);
    
    printf("Insert kg vegetables: ");
    scanf("%lf", &kg_veg);
    
    printf("Insert kg fruits: ");
    scanf("%lf", &kg_fruit);
    
    double total_bgn = price_veg * kg_veg + price_fruit * kg_fruit;
    double total_eur = total_bgn / 1.95;
    
    printf("Total income: %.2f EUR\n", total_eur);
    
    return 0;
}