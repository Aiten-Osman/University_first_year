#include <stdio.h>

int main() {
    double bgn;
    
    printf("Insert sum in BGN: ");
    scanf("%lf", &bgn);
    
    double usd = bgn / 1.75;  
    double eur = bgn / 1.95583;
    double gbp = bgn / 2.20;   
    
    printf("%.2f BGN = %.2f USD\n", bgn, usd);
    printf("%.2f BGN = %.2f EUR\n", bgn, eur);
    printf("%.2f BGN = %.2f GBP\n", bgn, gbp);
    
    return 0;
}